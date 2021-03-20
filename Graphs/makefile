CXX = g++
CPPFLAGS = -g -std=c++17\
			-Wall -Wextra\
			-pedantic\
			-fsanitize=address\
			-fsanitize=signed-integer-overflow\
			-fsanitize=undefined 

TARGET = ./main

TARGET1 = ./GraphImp

$(TARGET): $(TARGET).cpp
	$(CXX) $(CPPFLAGS)  -o $(TARGET) $(TARGET).cpp $(TARGET1).cpp

.PHONY: clean
clean:
	$(RM) $(TARGET) *.out *.o
