CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))
LD_FLAGS := 
CC_FLAGS := -c -Wall -I. 
CC = g++
OUTPUT = ComplexProgram

$(OUTPUT): $(OBJ_FILES)
	$(CC) $(LD_FLAGS) -o $@ $^

obj/%.o: %.cpp
	$(CC) $(CC_FLAGS) -c -o $@ $<
	
	
clean:
	rm -rf obj/*
	rm $(OUTPUT)
