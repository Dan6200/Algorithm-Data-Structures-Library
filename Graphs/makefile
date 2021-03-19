CC = g++
CPPFLAGS = -g -std=c++17\
			-Wall -Wextra\
			-pedantic\
			-fsanitize=address\
			-fsanitize=signed-integer-overflow\
			-fsanitize=undefined 

INCLUDES = .

TARGET = ./main

TARGET1 = ./GraphImp

$(TARGET): $(TARGET).cpp
$(TARGET1): $(TARGET1).cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(TARGET1) $(TARGET).cpp

.PHONY: clean
clean:
	$(RM) $(TARGET) *.out *.o
