CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

TARGET = hash_table

# Get the values of file1 and file2 from command line (or use default values)
f1 ?= file1.c
f2 ?= file2.c

SRCS = $(f1) $(f2)


all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^


clean:
	rm $(TARGET)
