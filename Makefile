# Name for the shared library
LIBRARY := libpaccolors.so

# Compiler and flags
CC := gcc
CFLAGS = -c -fPIC $< -o $@

# Directories
SRC_DIR := src
OBJ_DIR := obj

# Files
SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

VPATH = $(SRC_DIR)
.DEFAULT := all
.PHONY: all clean

all: $(LIBRARY)

clean:
	rm -rf $(OBJ_DIR) $(LIBRARY)

$(LIBRARY): $(OBJ_FILES) | $(OBJ_DIR)
	$(CC) -shared -o $@ $^

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS)

$(OBJ_DIR):
	mkdir $@
