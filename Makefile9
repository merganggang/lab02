CC = gcc
CFLAGS = -Wall -O2
AR = ar
TARGET = program

all: $(TARGET)

libmymath.a: mymath.o
	$(AR) rcs $@ $<

mymath.o: mymath.c mymath.h
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): main.c libmymath.a
	$(CC) $(CFLAGS) -o $@ main.c -L. -lmymath

clean:
	rm -f *.o *.a $(TARGET)