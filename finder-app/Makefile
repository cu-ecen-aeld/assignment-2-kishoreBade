# Variables
CC := gcc
CFLAGS := -Wall

# Dependencies
SOURCES = writer.c 
OBJECTS = $(SOURCES:.c=.o)
TARGET = writer

# changing CC to aarch64
ifdef CROSS_COMPILE
    CC := $(CROSS_COMPILE)gcc
endif

#Building target
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

#Clean all
clean:
	rm -f $(TARGET) $(OBJECTS) core


