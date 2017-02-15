LD_FLAGS := 
INCLUDES := -I. -IComplex
CC_FLAGS := -g -Wall $(INCLUDES)
CC = g++
OUTPUT = ComplexProgram
SOURCES = main.cpp Complex/Complex.cpp

all:
	$(CC) $(CC_FLAGS) -o $(OUTPUT) $(SOURCES)

clean:
	rm -rf obj/*
	rm $(OUTPUT)
