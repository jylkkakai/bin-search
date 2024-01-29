CC = gcc

TARGET_EXE := bin_search

BUILD_DIR := ./build
SRC_DIR := ./src

VPATH = ./src 

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst %.c,$(BUILD_DIR)/%.o,$(wildcard $(SRC_DIR)/*.c))
DEPS := $(wildcard $(SRC_DIR)/*.h)

$(BUILD_DIR)/$(TARGET_EXE): $(OBJS)
	$(CC) $^ -o $@ 

$(BUILD_DIR)/%.o: %.c $(DEPS)
	echo $(OBJS)
	mkdir -p $(dir $@)
	$(CC) $< -c  -o $@
 
clean:
	rm -r $(BUILD_DIR)
	

