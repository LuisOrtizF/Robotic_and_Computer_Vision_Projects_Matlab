# Robotic and Computer Vision Projects  with Matlab
---

This repository contains examples of some tasks of computer vision implemented with **Matlab**.

<div align="center">
<img src="/Images/matlab_logo.png" width="200" height="100" alt="robot"/>
</div>

+ **Calibration_Kinect_v1**: Find the intrinsic parameters of the **Kinect** version 1.0.

<div align="center">
<img src="/Images/undistorted.png" width="400" height="200" alt="robot"/>
</div>

+ **Calibration_Kinect_v2**: Find the intrinsic parameters of the **Kinect** version 2.0.
+ **Calibration_ZED_Camera**: Find the intrinsic parameters of the Stereolabs **ZED** camera version 1.0.

<div align="center">
<img src="/Images/calibration.png" width="600" height="300" alt="robot"/>
</div>

+ **Capture_Images_Kinect_v1_and_v2**: Take RGB images, depth maps, and point clouds using the Kinect version 2.0.

<div align="center">
<table> 
  <tr> 
    <td> <img src="/Images/rgb.png" width="200" height="100" alt="robot" /> </td>
    <td> <img src="/Images/depth.png" width="200" height="100" alt="robot" /> </td>
    <td> <img src="/Images/ir.png" width="200" height="100" alt="robot" /></td>
  </tr>
</table>
</div>

+ **Compute_Essential_Fundamental_Matrix**: Compute the essential and fundamental matrix in a stereo pair.

<div align="center">
<img src="/Images/matches.png" width="300" height="150" alt="robot"/>
</div>

+ **Convert_Corners_Detection_Matlab_to_C++**: Desmostates how use **CODEGEN** package to generate **C/C++** code from **Matlab** code, specifically the code converts the **Matlab** function `detectCheckerboardPoints` into a **C++** function.
+ **Convert_Function_Matlab_to_C++**: Converts a **Matlab** function that add and subtract numbers into a **C++** function and demostrates how use it in C++.
+ **Corners_Detection_Live_Camera_ZED**: Detect corners in images taken in real-time with a **ZED** camera.
+ **LIBCBDETECT_Corner_and_Checkerboard_Detection**: Converts the Matlab implementation of __[LIBCBDETECT](http://www.cvlibs.net/software/libcbdetect/)__ into a C++ library, using **CODEGEN**. The algorithm automatically extracts corners to sub-pixel accuracy and combines them to (rectangular) checkerboards / chessboard-like patterns. It works on a variety of imagery (pinhole cameras, fisheye cameras, omnidirectional cameras).

<div align="center">
<img src="/Images/libcbdetect.png" width="400" height="200" alt="robot"/>
</div>

+ **Point_Clouds_Similarity**: Compute the similarity of the point cloud using the Mahalanobis distance.

<div align="center">
<img src="/Images/similarity.png" width="300" height="300" alt="robot"/>
</div>

+ **VO_Monocular_Libviso2_ZED**: Implementation of a Monocular Visual Odometry System using __[LIBVISO2](http://www.cvlibs.net/software/libviso/) library. LIBVISO2 computes the 6 DOF motion of a moving mono camera. The monocular implementation is still very experimental and uses the 8-point algorithm for fundamental matrix estimation. It further assumes that the camera moves at a known and fixed height over the ground (for estimating the scale). Due to the eight correspondences needed for the 8-point algorithm, many more RANSAC samples need to be drawn, making the monocular algorithm slower than the stereo algorithm. Three correspondences are sufficient to estimate parameters.

<div align="center">
<img src="/Images/mono_vo.gif" width="200" height="300" alt="robot"/>
</div>

## How to Use:

+ Dependences (mandatory):
    + **Matlab**

## NOTE:

|If you find any of these codes helpful, please share my __[GitHub](https://github.com/LuisOrtizF)__ and __*STAR*__ :star: this repository to help other enthusiasts to find these tools. Remember, the knowledge must be shared. Otherwise, it is useless and lost in time.|
| :----------- |
