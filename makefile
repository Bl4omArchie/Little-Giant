# Compilers
CC = gcc

# Folders
SRC_DIR = src
INC_DIR = includes
BUILD_DIR = build

MAIN_TARGET = littleg.o


SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))
CFLAGS = -I$(INC_DIR)

# build rules
all: $(BUILD_DIR) $(MAIN_TARGET)


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<


# Main binary
$(MAIN_TARGET): $(OBJS)
	$(CC) main.c -o $(MAIN_TARGET) $(OBJS)

clean:
	rm -rf $(BUILD_DIR) $(MAIN_TARGET) .vscode/ *.o

.PHONY: all clean