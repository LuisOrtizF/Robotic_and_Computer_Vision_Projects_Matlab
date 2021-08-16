START_DIR = /home/luis/Desktop/CornersDetect_Matlab_C++

MATLAB_ROOT = /usr/local/MATLAB/R2017b
MAKEFILE = dCP_mex.mk

include dCP_mex.mki


SRC_FILES =  \
	dCP_data.c \
	dCP_initialize.c \
	dCP_terminate.c \
	dCP.c \
	rdivide.c \
	abs.c \
	detectCheckerboard.c \
	eml_int_forloop_overflow_check.c \
	imfilter.c \
	scalexpAlloc.c \
	indexShapeCheck.c \
	power.c \
	error.c \
	find_peaks.c \
	algbwmorph.c \
	bwlookup.c \
	isequal.c \
	sub2ind.c \
	Checkerboard.c \
	sort1.c \
	sortIdx.c \
	bsxfun.c \
	hypot.c \
	any.c \
	all.c \
	squeeze.c \
	norm.c \
	rot90.c \
	cat.c \
	mean.c \
	subPixelLocation.c \
	mldivide.c \
	warning.c \
	svd.c \
	svd1.c \
	majority.c \
	infocheck.c \
	xgesvd.c \
	diag.c \
	sum.c \
	_coder_dCP_info.c \
	_coder_dCP_api.c \
	_coder_dCP_mex.c \
	dCP_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = dCP_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexa64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = -lmwblas -lmwbwlookup_tbb -lmwimfilter -lmwimregionalmax -lmwipp -lmwippfilter -lmwlapack -lmwnhood 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#

OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/dCP"
SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "./interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) -Wl,-rpath,@loader_path
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -L"$(MATLAB_ROOT)/bin/glnxa64"

CCFLAGS = $(COMP_FLAGS)  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS  $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(CXX_FLAGS) -std=c++11  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS  $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/dCP/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/dCP/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/dCP/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"




$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)

#====================================================================

