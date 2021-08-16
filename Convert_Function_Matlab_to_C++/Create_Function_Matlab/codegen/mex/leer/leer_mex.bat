@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2016a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2016a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=leer_mex
set MEX_NAME=leer_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for leer > leer_mex.mki
echo COMPILER=%COMPILER%>> leer_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> leer_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> leer_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> leer_mex.mki
echo LINKER=%LINKER%>> leer_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> leer_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> leer_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> leer_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> leer_mex.mki
echo BORLAND=%BORLAND%>> leer_mex.mki
echo OMPFLAGS= >> leer_mex.mki
echo OMPLINKFLAGS= >> leer_mex.mki
echo EMC_COMPILER=mingw64>> leer_mex.mki
echo EMC_CONFIG=optim>> leer_mex.mki
"C:\Program Files\MATLAB\R2016a\bin\win64\gmake" -B -f leer_mex.mk
