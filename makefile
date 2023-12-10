CC=gcc
# Grab all C files
SOURCES = $(wildcard *.c)
# Create a list of object targets from them
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

# The "all" target references the object targets create just created
all: $(OBJECTS)

# How we create objects from C files
# $< is the first pre-req
# $@ is the target name
%.o: %.c
	$(CC) $< -o $@

# Phony marks this target as always out of date
.PHONY=clean
clean:
	rm -f $(OBJECTS)
