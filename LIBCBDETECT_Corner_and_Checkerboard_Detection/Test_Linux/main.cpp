// Include Files
#include "rt_nonfinite.h"
#include "fce.h"
#include "main.h"

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

static void main_fce();

Mat src = imread("../../Images/test_1.png", 1);

static void main_fce(Mat src_aux)
{
  emxArray_real_T *corners;
  emxArray_real_T *tam_chess;
  static unsigned char uv1[921600];
  emxInitArray_real_T(&corners, 2);
  emxInitArray_real_T(&tam_chess, 2);

  int idx0;
  int idx1;

  for (idx0 = 0; idx0 < 720; idx0++) {
    for (idx1 = 0; idx1 < 1280; idx1++) {
      uv1[idx0 + 720 * idx1] = src_aux.at<uchar>(idx0,idx1);
    }
  }

  fce(uv1, corners, tam_chess);

  int aux1;
  int aux2=0;

  int aux3[tam_chess->size[0]];

  vector<Point2f> corners_uv;
  vector<Point2f> corners1;
  vector<Point2f> corners2;
  vector<Point2f> corners3;

  for (idx0 = 0; idx0 < corners->size[0]; idx0++) {
    corners_uv.push_back(Point2f(corners->data[idx0], corners->data[idx0 + corners->size[0]]));
    cout << corners_uv[idx0]<<endl;
  }

  for (idx0 = 0; idx0 < tam_chess->size[0]; idx0++) {
    aux1=1;
    for (idx1 = 0; idx1 < tam_chess->size[1]; idx1++) {
      aux1=tam_chess->data[idx0 + tam_chess->size[0] * idx1]*aux1;
    }
    aux2=aux1+aux2;
    aux3[idx0]=aux1;
  }

  if(aux2==corners->size[0]){
    cout<<"Find Corners Successfull: "<<tam_chess->size[0]<<" Chessboards, "<<corners->size[0]<<" Corners."<<endl;
  }

  if(tam_chess->size[0]==3){

    for (idx0 = 0; idx0 < aux3[0]; idx0++) {
      corners1.push_back(corners_uv[idx0]);
      //cout << corners1[idx0]<<endl;
    }

    for (idx0 = aux3[0]; idx0 < (aux3[0]+aux3[1]); idx0++) {
      corners2.push_back(corners_uv[idx0]);
      //cout << corners2[idx0-aux3[0]]<<endl;
    }

    for (idx0 = (aux3[0]+aux3[1]); idx0 < aux2; idx0++) {
      corners3.push_back(corners_uv[idx0]);
      //cout << corners3[idx0-(aux3[0]+aux3[1])]<<endl;
    }

    cornerSubPix(src_aux, corners1, Size(tam_chess->data[3], tam_chess->data[0]), Size(-1, -1), TermCriteria(CV_TERMCRIT_EPS + CV_TERMCRIT_ITER, 100, 0.01));
    cornerSubPix(src_aux, corners2, Size(tam_chess->data[4], tam_chess->data[1]), Size(-1, -1), TermCriteria(CV_TERMCRIT_EPS + CV_TERMCRIT_ITER, 100, 0.01));
    cornerSubPix(src_aux, corners3, Size(tam_chess->data[2], tam_chess->data[5]), Size(-1, -1), TermCriteria(CV_TERMCRIT_EPS + CV_TERMCRIT_ITER, 100, 0.01));

    drawChessboardCorners(src, Size(tam_chess->data[3], tam_chess->data[0]), cv::Mat(corners1), true);
    drawChessboardCorners(src, Size(tam_chess->data[4], tam_chess->data[1]), cv::Mat(corners2), true);
    drawChessboardCorners(src, Size(tam_chess->data[2], tam_chess->data[5]), cv::Mat(corners3), true);

    namedWindow("Corners Detection", WINDOW_NORMAL);
    moveWindow("Corners Detection", 0, 0);
    resizeWindow("Corners Detection", 700, 700);
    imshow("Corners Detection", src);

    imwrite("Corners_3D_Chess.jpg",src);
    cout << "\nSave 'Corners_3D_Chess.jpg'"<<endl;

    cout << "\nPress 'q' key to continue."<<endl;
    
    char key = ' ';
    while(key != 'q')
      key = waitKey(10);

    destroyWindow("Corners Detection");
  }

  emxDestroyArray_real_T(tam_chess);
  emxDestroyArray_real_T(corners);
}

int main(int, const char * const [])
{

  fce_initialize();

  cv::Mat src_gray;

  cvtColor(src, src_gray, CV_BGR2GRAY);

  main_fce(src_gray);

  fce_terminate();

  return 0;
}
