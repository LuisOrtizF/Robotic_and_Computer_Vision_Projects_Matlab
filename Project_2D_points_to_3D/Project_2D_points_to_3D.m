figure(1);
hold on
xlim([-100 100]);
ylim([-100 100]);
zlim([-100 100]);

IntrinsicMatrix1 = [718.856 0 0; 0 718.856 0; 607.1928 185.2157 1];
cameraParams1 = cameraParameters('IntrinsicMatrix',IntrinsicMatrix1); 
rotationMatrix1 = eye(3);
translationVector1 = [0 0 0];
camMatrix1 = cameraMatrix(cameraParams1,rotationMatrix1,translationVector1)

cam1 = plotCamera('Location',translationVector1,'Orientation',rotationMatrix1,'Size', 2, 'Color', [0 1 0] );

cameraParams2 = cameraParameters('IntrinsicMatrix',IntrinsicMatrix1); 
rotationMatrix2 = [0.999972 -0.0012703 -0.00732971; 0.00123857 0.99999 -0.00433312; 0.00733514 0.00432392 0.999964];
% rotationMatrix2 = [0.999972 0.00123857 0.00733514; -0.0012703 0.99999 0.00432392; -0.00732971 -0.00433312 0.999964]

translationVector2 = [0.00475817 0.000755141 0.999988]*(0.860443+0.859327);
% translationVector2 =[0.00257795 -0.00508505 -0.999984]*(0.681817+0.833033);

camMatrix2 = cameraMatrix(cameraParams2,rotationMatrix2,translationVector2)

% 723.29    1.71229    601.902    914.614
%    2.24893     719.65    182.094    281.393
% 0.00733514 0.00432392   0.999964    1.51483

cam2 = plotCamera('Location',translationVector2,'Orientation',rotationMatrix2,'Size', 2, 'Color', [1 0 0] );

matchedPoints1 = [268.5486145019531, 305.9796142578125;
 301.184326171875, 250.9944763183594;
 688.1983032226562, 209.0479125976562;
 328.3435363769531, 175.2569732666016;
 480.3480834960938, 139.584228515625;
 454.677001953125, 79.57164764404297;
 583.5810546875, 86.85273742675781;
 714.948974609375, 260.1213073730469;
 927.0195922851562, 142.3363952636719;
 934.3123168945312, 157.2933654785156;
 486.1467590332031, 127.5958099365234;
 127.9916610717773, 81.04157257080078;
 508.94482421875, 161.7401275634766;
 418.6626586914062, 228.0367889404297;
 899.2487182617188, 143.2089996337891;
 488.0702819824219, 196.8899383544922;
 378.3706359863281, 201.2337188720703;
 323.4717712402344, 117.2273635864258;
 323.2807312011719, 124.2078857421875;
 498.7693176269531, 166.7023162841797;
 607.8455200195312, 183.8973236083984;
 351.4805603027344, 197.8897705078125;
 145.8014068603516, 305.1781616210938;
 493.0307922363281, 191.5524139404297;
 482.8857727050781, 203.2763061523438;
 598.0446166992188, 96.865234375;
 934.7169799804688, 136.1825561523438;
 497.004638671875, 131.4386138916016;
 528.7205810546875, 144.8856353759766;
 447.2970886230469, 176.9495849609375;
 446.2700500488281, 184.1023559570312;
 445.2149963378906, 168.2293243408203;
 298.2260437011719, 126.3698348999023;
 389.117919921875, 223.8059844970703;
 442.2762451171875, 199.6978302001953;
 424.7302551269531, 219.4175109863281;
 312.1641235351562, 190.7852172851562;
 906.55712890625, 154.7348022460938;
 438.6275634765625, 173.8993835449219;
 700.9415893554688, 253.3410797119141;
 807.5866088867188, 159.0252838134766;
 192.1086120605469, 304.9971618652344;
 463.0472106933594, 46.99456024169922;
 630.0216064453125, 234.7008361816406;
 675.7786254882812, 325.3865051269531;
 336.2930908203125, 160.1614990234375;
 472.4755859375, 210.4455413818359;
 468.8758239746094, 46.43964767456055;
 465.7242736816406, 137.7703704833984;
 136.3136291503906, 301.9817504882812;
 341.2342224121094, 179.8548278808594;
 609.164306640625, 52.41061019897461;
 892.329833984375, 155.9099731445312;
 711.7943115234375, 255.6387329101562;
 906.0048217773438, 151.3393096923828;
 430.848388671875, 212.2141265869141;
 479.7638549804688, 210.6632843017578;
 426.1118469238281, 227.7180480957031];

matchedPoints2 = [224.1934051513672, 328.5948791503906;
 281.3558959960938, 260.1712036132812;
 699.4791259765625, 213.2454528808594;
 323.3175659179688, 178.0458984375;
 484.3227233886719, 142.3854370117188;
 453.9053039550781, 78.17350006103516;
 588.3047485351562, 86.0797119140625;
 733.295654296875, 271.9206237792969;
 954.1802368164062, 141.8501129150391;
 962.05419921875, 157.2216949462891;
 490.4280700683594, 130.0630035400391;
 94.76528167724609, 77.64756774902344;
 513.177978515625, 163.8600311279297;
 414.9624328613281, 232.7958374023438;
 924.2432250976562, 143.0614318847656;
 490.8622741699219, 200.0371704101562;
 371.2777709960938, 205.2137145996094;
 318.0127563476562, 118.12109375;
 318.3447875976562, 124.9836120605469;
 502.3493041992188, 170.0042114257812;
 611.3649291992188, 187.8080749511719;
 352.9584045410156, 204.4243316650391;
 83.46182250976562, 327.3716430664062;
 495.8835754394531, 194.7065734863281;
 484.0206909179688, 206.6692504882812;
 602.1373901367188, 95.55040740966797;
 962.4464721679688, 135.2031707763672;
 501.3138732910156, 133.8083343505859;
 532.8075561523438, 147.1533203125;
 450.0411987304688, 179.8842468261719;
 448.9080200195312, 187.1375885009766;
 447.70556640625, 170.8172912597656;
 291.0851135253906, 126.9235992431641;
 382.1271362304688, 229.5151824951172;
 440.0046081542969, 202.7459259033203;
 421.6232299804688, 224.1183166503906;
 305.7253112792969, 194.9632263183594;
 932.4793701171875, 155.2661895751953;
 440.7784729003906, 176.5532379150391;
 715.6495361328125, 264.0128479003906;
 826.5449829101562, 159.7584838867188;
 136.4387817382812, 326.6891174316406;
 462.0887756347656, 43.95835494995117;
 637.9949340820312, 241.6988525390625;
 696.0838623046875, 357.8788757324219;
 332.242431640625, 162.3492736816406;
 472.9437561035156, 214.3064422607422;
 468.5737609863281, 42.7542610168457;
 468.6888427734375, 140.55078125;
 73.21752166748047, 323.1269226074219;
 337.1460571289062, 183.0582275390625;
 614.60791015625, 46.92415237426758;
 917.2243041992188, 156.2583160400391;
 729.822998046875, 267.1387634277344;
 931.5420532226562, 150.9001312255859;
 427.6712036132812, 216.9531402587891;
 480.7913513183594, 214.6331634521484;
 422.9873046875, 232.5584259033203];

worldPoints = triangulate(matchedPoints1,matchedPoints2,camMatrix1,camMatrix2)

plot3(worldPoints(:,1),worldPoints(:,2),worldPoints(:,3),'*');