# Directories and paths
SRC_DIR = src/
OBJ_DIR = obj/

SRC_FILES := $(wildcard $(SRC_DIR)*.c)
OBJ_FILES := $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC_FILES))

TARGET = fizzbuzz

# Compiler options
CC = gcc
LDFLAGS = -lm
CCFLAGS = -Wno-int-conversion -Wall -Wextra -Werror

# Build
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) -c -o $@ $< $(CCFLAGS)

all: $(OBJ_FILES)
	$(CC) -o $(TARGET) $(OBJ_FILES) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ_FILES)
