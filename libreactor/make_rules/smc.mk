# State Machine Compiler

JAVA				:= /usr/bin/java
SMC_JAR				:= /usr/local/share/java/Smc.jar

CPP_INPUT_DIR		?= $(PRJ_DIR)/smc/cpp
JAVA_INPUT_DIR		?= $(PRJ_DIR)/smc/java
PYTHON_INPUT_DIR	?= $(PRJ_DIR)/smc/python

GEN_CPP				?=n
GEN_JAVA			?=n
GEN_PYTHON			?=n

CPP_OUTPUT			?= $(PRJ_DIR)/libreactor/src/$(SMC_FILE_DIR)
JAVA_OUTPUT			?= $(PRJ_DIR)/jreactor/src/main/java/com/github/kylegagnon99/$(SMC_FILE_DIR)
PYTHON_OUTPUT		?= $(PRJ_DIR)/pyreactor/src/$(SMC_FILE_DIR)

SMC_FILE			?=

.PHONY: generate-smc
generate-smc:
	@$(ECHO) Generating SMC file
	$(eval SMC_FILE_DIR := $(dir $(SMC_FILE)))
ifeq ($(SMC_FILE),)
	$(error SMC_FILE is not defined)
endif
ifeq ($(GEN_CPP),y)
	$(eval SMC_FILE_BASE := $(basename $(notdir $(SMC_FILE)))_sm.h)
	rm -f $(CPP_OUTPUT)$(SMC_FILE_BASE:.sm=.cpp)
	rm -f $(CPP_OUTPUT)$(SMC_FILE_BASE:.sm=.h)
	$(VERBOSE)$(JAVA) -jar $(SMC_JAR) -c++ -d $(CPP_OUTPUT) $(CPP_INPUT_DIR)/$(SMC_FILE)
	$(VERBOSE)$(FIND) $(CPP_OUTPUT) -type f -name "*.cpp" -exec $(SED) -i -e 's/$(subst /,\/,$(CPP_OUTPUT))/$(subst /,,$(SMC_FILE_DIR))\//' {} \;
endif
ifeq ($(GEN_JAVA),y)
	rm -f $(JAVA_OUTPUT)$(SMC_FILE:.sm=.java)
	$(VERBOSE)$(JAVA) -jar $(SMC_JAR) -java -d $(JAVA_OUTPUT)  $(JAVA_INPUT_DIR)$(SMC_FILE)
endif
ifeq ($(GEN_PYTHON),y)
	rm -f $(JAVA_OUTPUT)$(SMC_FILE:.sm=.py)
	$(VERBOSE)$(JAVA) -jar $(SMC_JAR) -python -d $(PYTHON_OUTPUT)  $(PYTHON_INPUT_DIR)$(SMC_FILE)
endif
	@$(ECHO) Done generating $(SMC_FILE) 
	

.PHONY: smc-help
smc-help:
	@$(ECHO) "State Machine Compiler Help"
	@$(ECHO) "To generate the file you need to define SMC_FILE"
	@$(ECHO) "and the either set GEN_CPP, GEN_JAVA, GEN_PYTHON"
	@$(ECHO) "to y. The file will generate to the matching location"
	@$(ECHO) "of the SMC file relative to the SMC folder. So for"
	@$(ECHO) "example if the smc file is located in <relative SMC"
	@$(ECHO) "folder>/reactor/SmcFile.smc then the generated output"
	@$(ECHO) "will go to /reactor/SmcFile...."
