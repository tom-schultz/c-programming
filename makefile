CC=gcc
SOURCES = $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

all: $(OBJECTS)

%.o: %.c
	$(CC) $< -o $@

.PHONY=clean
clean:
	rm $(OBJECTS)
