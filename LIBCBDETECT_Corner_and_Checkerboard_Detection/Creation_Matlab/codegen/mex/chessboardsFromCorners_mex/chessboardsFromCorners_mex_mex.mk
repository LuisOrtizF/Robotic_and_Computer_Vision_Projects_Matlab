START_DIR = C:\Users\Luisito\DOCUME~1\MAESTR~1\Tesis\Codigos\DETECC~1\v7

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2016a
MAKEFILE = chessboardsFromCorners_mex_mex.mk

include chessboardsFromCorners_mex_mex.mki


SRC_FILES =  \
	chessboardsFromCorners_mex_data.c \
	chessboardsFromCorners_mex_initialize.c \
	chessboardsFromCorners_mex_terminate.c \
	chessboardsFromCorners.c \
	extractuv.c \
	findCorners.c \
	initChessboard.c \
	eml_int_forloop_overflow_check.c \
	indexShapeCheck.c \
	nullAssignment.c \
	power.c \
	scalexpAlloc.c \
	error.c \
	sqrt.c \
	any.c \
	isequal.c \
	std.c \
	mean.c \
	chessboardEnergy.c \
	norm.c \
	growChessboard.c \
	atan2.c \
	all.c \
	conv2.c \
	xaxpy.c \
	createCorrelationPatch.c \
	sum.c \
	nonMaximumSuppression.c \
	refineCorners.c \
	findModesMeanShift.c \
	sort1.c \
	sortIdx.c \
	scoreCorners.c \
	cornerCorrelationScore.c \
	_coder_chessboardsFromCorners_mex_info.c \
	_coder_chessboardsFromCorners_mex_api.c \
	_coder_chessboardsFromCorners_mex_mex.c \
	chessboardsFromCorners_mex_emxutil.c

MEX_FILE_NAME_WO_EXT = chessboardsFromCorners_mex
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
SYS_INCLUDE += -I "$(START_DIR)\codegen\mex\chessboardsFromCorners_mex"
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

%.$(OBJEXT) : $(START_DIR)\codegen\mex\chessboardsFromCorners_mex/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\chessboardsFromCorners_mex/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\chessboardsFromCorners_mex/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

#====================================================================

