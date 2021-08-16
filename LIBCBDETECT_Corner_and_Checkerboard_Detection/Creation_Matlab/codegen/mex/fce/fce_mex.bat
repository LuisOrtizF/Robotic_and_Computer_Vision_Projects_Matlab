@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=fce_mex
set MEX_NAME=fce_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for fce > fce_mex.mki
echo COMPILER=%COMPILER%>> fce_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> fce_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> fce_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> fce_mex.mki
echo LINKER=%LINKER%>> fce_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> fce_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> fce_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> fce_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> fce_mex.mki
echo BORLAND=%BORLAND%>> fce_mex.mki
echo OMPFLAGS= >> fce_mex.mki
echo OMPLINKFLAGS= >> fce_mex.mki
echo EMC_COMPILER=mingw64>> fce_mex.mki
echo EMC_CONFIG=optim>> fce_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f fce_mex.mk
