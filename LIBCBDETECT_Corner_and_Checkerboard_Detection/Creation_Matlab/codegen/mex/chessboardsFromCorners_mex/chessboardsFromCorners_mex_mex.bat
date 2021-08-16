@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=chessboardsFromCorners_mex
set MEX_NAME=chessboardsFromCorners_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for chessboardsFromCorners_mex > chessboardsFromCorners_mex_mex.mki
echo COMPILER=%COMPILER%>> chessboardsFromCorners_mex_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> chessboardsFromCorners_mex_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> chessboardsFromCorners_mex_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> chessboardsFromCorners_mex_mex.mki
echo LINKER=%LINKER%>> chessboardsFromCorners_mex_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> chessboardsFromCorners_mex_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> chessboardsFromCorners_mex_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> chessboardsFromCorners_mex_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> chessboardsFromCorners_mex_mex.mki
echo BORLAND=%BORLAND%>> chessboardsFromCorners_mex_mex.mki
echo OMPFLAGS= >> chessboardsFromCorners_mex_mex.mki
echo OMPLINKFLAGS= >> chessboardsFromCorners_mex_mex.mki
echo EMC_COMPILER=mingw64>> chessboardsFromCorners_mex_mex.mki
echo EMC_CONFIG=optim>> chessboardsFromCorners_mex_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f chessboardsFromCorners_mex_mex.mk
