###########################################################################
## Makefile generated for component 'VE_Surveillance'. 
## 
## Makefile     : VE_Surveillance.mk
## Generated on : Mon Jun 22 22:26:27 2026
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/VE_Surveillance.exe
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# CMD_FILE                Command file

PRODUCT_NAME              = VE_Surveillance
MAKEFILE                  = VE_Surveillance.mk
MATLAB_ROOT               = C:/PROGRA~1/POLYSP~1/R2021a
MATLAB_BIN                = C:/PROGRA~1/POLYSP~1/R2021a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/Lenovo/Desktop/PR8ED9~1
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
CMD_FILE                  = VE_Surveillance.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSSC_SLI_ERT_LCC_OBJS   = 
LIBSSC_CORE_ERT_LCC_OBJS  = 
LIBNE_ERT_LCC_OBJS        = 
LIBMC_ERT_LCC_OBJS        = 
LIBEX_ERT_LCC_OBJS        = 
LIBPM_ERT_LCC_OBJS        = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          LCC-win64 v2.4.1 | gmake (64-bit Windows)
# Supported Version(s):    2.4.1
# ToolchainInfo Version:   2021a
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

SHELL              = cmd
LCC_ROOT           = $(MATLAB_ROOT)/sys/lcc64/lcc64
LCC_BUILDLIB       = $(LCC_ROOT)/bin/buildlib
LCC_LIB            = $(LCC_ROOT)/lib64
MW_EXTERNLIB_DIR   = $(MATLAB_ROOT)/extern/lib/win64/microsoft
MW_LIB_DIR         = $(MATLAB_ROOT)/lib/win64
TOOLCHAIN_INCLUDES = -I$(LCC_ROOT)/include64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Lcc-win64 C Compiler
CC_PATH = $(LCC_ROOT)/bin
CC = "$(CC_PATH)/lcc64"

# Linker: Lcc-win64 Linker
LD_PATH = $(LCC_ROOT)/bin
LD = "$(LD_PATH)/lcclnk64"

# Archiver: Lcc-win64 Archiver
AR_PATH = $(LCC_ROOT)/bin
AR = "$(AR_PATH)/lcclib64"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -Fo
LDDEBUG             =
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = /out:
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              =
CFLAGS               = -c -w -noregistrylookup -nodeclspec -I$(LCC_ROOT)/include64
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -dll -entry LibMain -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL) $(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/VE_Surveillance.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/VE_Surveillance_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=VE_Surveillance -DNUMST=2 -DNCSTATES=1 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_all.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_act.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_exp.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_log.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_tdxf_p.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_a_p.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_il.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_a.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_dxf.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_f.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_assert.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_gateway.c $(START_DIR)/VE_Surveillance_ert_rtw/pm_printf.c $(START_DIR)/VE_Surveillance_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/VE_Surveillance_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/VE_Surveillance_ert_rtw/rt_lu_real.c $(START_DIR)/VE_Surveillance_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance.c

MAIN_SRC = $(START_DIR)/VE_Surveillance_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = VE_Surveillance_e34e9e3c_1_ds.obj VE_Surveillance_e34e9e3c_1_ds_obs_all.obj VE_Surveillance_e34e9e3c_1_ds_obs_act.obj VE_Surveillance_e34e9e3c_1_ds_obs_exp.obj VE_Surveillance_e34e9e3c_1_ds_log.obj VE_Surveillance_e34e9e3c_1_ds_tdxf_p.obj VE_Surveillance_e34e9e3c_1_ds_a_p.obj VE_Surveillance_e34e9e3c_1_ds_obs_il.obj VE_Surveillance_e34e9e3c_1_ds_a.obj VE_Surveillance_e34e9e3c_1_ds_dxf.obj VE_Surveillance_e34e9e3c_1_ds_f.obj VE_Surveillance_e34e9e3c_1_ds_assert.obj VE_Surveillance_e34e9e3c_1.obj VE_Surveillance_e34e9e3c_1_gateway.obj pm_printf.obj rt_backsubrr_dbl.obj rt_forwardsubrr_dbl.obj rt_lu_real.obj rt_matrixlib_dbl.obj VE_Surveillance.obj

MAIN_OBJ = ert_main.obj

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_ert_lcc.lib $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_ert_lcc.lib $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64/ne_ert_lcc.lib $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64/mc_ert_lcc.lib $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64/ex_ert_lcc.lib $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64/pm_ert_lcc.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) @$(CMD_FILE) $(subst /,\,$(subst /,\,$(LIBS))) $(subst /,\,$(subst /,\,$(SYSTEM_LIBS))) $(subst /,\,$(subst /,\,$(TOOLCHAIN_LIBS)))
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(START_DIR)/VE_Surveillance_ert_rtw/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_obs_all.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_all.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_obs_act.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_act.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_obs_exp.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_log.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_log.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_tdxf_p.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_a_p.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_a_p.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_obs_il.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_obs_il.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_a.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_a.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_dxf.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_dxf.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_f.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_f.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_ds_assert.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_ds_assert.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance_e34e9e3c_1_gateway.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance_e34e9e3c_1_gateway.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


pm_printf.obj : $(START_DIR)/VE_Surveillance_ert_rtw/pm_printf.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rt_backsubrr_dbl.obj : $(START_DIR)/VE_Surveillance_ert_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rt_forwardsubrr_dbl.obj : $(START_DIR)/VE_Surveillance_ert_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rt_lu_real.obj : $(START_DIR)/VE_Surveillance_ert_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rt_matrixlib_dbl.obj : $(START_DIR)/VE_Surveillance_ert_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


VE_Surveillance.obj : $(START_DIR)/VE_Surveillance_ert_rtw/VE_Surveillance.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


ert_main.obj : $(START_DIR)/VE_Surveillance_ert_rtw/ert_main.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_ert_lcc.lib : $(LIBSSC_SLI_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBSSC_SLI_ERT_LCC_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_ert_lcc.lib : $(LIBSSC_CORE_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBSSC_CORE_ERT_LCC_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64/ne_ert_lcc.lib : $(LIBNE_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBNE_ERT_LCC_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64/mc_ert_lcc.lib : $(LIBMC_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBMC_ERT_LCC_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64/ex_ert_lcc.lib : $(LIBEX_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBEX_ERT_LCC_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64/pm_ert_lcc.lib : $(LIBPM_ERT_LCC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS) /out:$@ $(LIBPM_ERT_LCC_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


