MATLAB="/usr/local/MATLAB/R2017b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/luis/.matlab/R2017b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for dCP" > dCP_mex.mki
echo "CC=$CC" >> dCP_mex.mki
echo "CFLAGS=$CFLAGS" >> dCP_mex.mki
echo "CLIBS=$CLIBS" >> dCP_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> dCP_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> dCP_mex.mki
echo "CXX=$CXX" >> dCP_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> dCP_mex.mki
echo "CXXLIBS=$CXXLIBS" >> dCP_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> dCP_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> dCP_mex.mki
echo "LDFLAGS=$LDFLAGS" >> dCP_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> dCP_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> dCP_mex.mki
echo "Arch=$Arch" >> dCP_mex.mki
echo "LD=$LD" >> dCP_mex.mki
echo OMPFLAGS= >> dCP_mex.mki
echo OMPLINKFLAGS= >> dCP_mex.mki
echo "EMC_COMPILER=gcc" >> dCP_mex.mki
echo "EMC_CONFIG=optim" >> dCP_mex.mki
"/usr/local/MATLAB/R2017b/bin/glnxa64/gmake" -B -f dCP_mex.mk
