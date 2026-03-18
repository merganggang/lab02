CC = gcc
CFLAGS = -Wall -O2
SRCS = main.c mymath.c
OBJS = $(SRCS:.c=.o)
TARGET = program
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.c mymath.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(TARGET)