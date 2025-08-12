#################################################################################
##============================  SAMPLE MAKE FILE  =============================##
##  Hail to the QAs!                                                           ##
#################################################################################

CC = cc
CFLAGS = -Wall -Wextra -Werror

# file paths
SRC_DIR = ..
UNITY_SRC_DIR = ./Unity-2.6.1/src
UNITY_O = $(UNITY_SRC_DIR)/unity.c

# compile and run just the desired file and its test
# pull function refference from project's .h file instead of $(SRC_DIR)/$(*).c
%:
	$(CC) test_$(*).c $(UNITY_O) -I ../*.h
	./a.out

clean:
	rm -f a.out
.PHONY: clean