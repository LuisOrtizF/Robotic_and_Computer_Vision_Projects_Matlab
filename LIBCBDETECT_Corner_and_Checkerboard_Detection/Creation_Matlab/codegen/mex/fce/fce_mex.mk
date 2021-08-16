START_DIR = C:\Users\Luisito\DOCUME~1\MAESTR~1\Tesis\Codigos\DETECC~1\v7

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2016a
MAKEFILE = fce_mex.mk

include fce_mex.mki


SRC_FILES =  \
	fce_data.c \
	fce_initialize.c \
	fce_terminate.c \
	fce.c \
	findCorners.c \
	conv2.c \
	eml_int_forloop_overflow_check.c \
	xaxpy.c \
	atan2.c \
	scalexpAlloc.c \
	power.c \
	error.c \
	sqrt.c \
	indexShapeCheck.c \
	createCorrelationPatch.c \
	norm.c \
	sum.c \
	isequal.c \
	nonMaximumSuppression.c \
	refineCorners.c \
	findModesMeanShift.c \
	all.c \
	any.c \
	sort1.c \
	sortIdx.c \
	nullAssignment.c \
	scoreCorners.c \
	cornerCorrelationScore.c \
	mean.c \
	std.c \
	chessboardsFromCorners.c \
	initChessboard.c \
	chessboardEnergy.c \
	growChessboard.c \
	extractuv.c \
	_coder_fce_info.c \
	_coder_fce_api.c \
	_coder_fce_mex.c \
	fce_emxutil.c

MEX_FILE_NAME_WO_EXT = fce_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = -llibmwblas 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MinGW
# Copyright 2015 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
CC = $(COMPILER)
LD = $(LINKER)
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

SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "$(START_DIR)\codegen\mex\fce"
SYS_INCLUDE += -I ".\interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += -I "."

EML_LIBS = -llibemlrt -llibcovrt -llibut -llibmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)

EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS)
CXX_FLAGS = $(COMPFLAGS) $(OMPFLAGS)
LINK_FLAGS = $(LINKFLAGS) 
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS)
  CXX_FLAGS += $(OPTIMFLAGS)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  CXX_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -L"$(MATLAB_ROOT)\extern\lib\win64\mingw64"

CCFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =   $(CXX_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\fce/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\fce/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\fce/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================

