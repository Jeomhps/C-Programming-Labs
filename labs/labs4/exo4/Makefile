# Define the compiler and flags
CC = gcc
CFLAGS = -Wall -Iinclude -std=c99  # -IInclude tells the compiler that the .h files of my project are in the include folder.

# Directories for source files, object files, and binaries
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Source files and their corresponding object files
SRCS = $(wildcard $(SRC_DIR)/*.c)      # All .c files in the src directory
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Final binary output
TARGET = $(BIN_DIR)/number_game

# Default target: compile the program
all: $(TARGET)

# Rule to link object files and create the final executable
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)  # Create bin directory if it doesn't exist
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .c files into .o object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)  # Create obj directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

