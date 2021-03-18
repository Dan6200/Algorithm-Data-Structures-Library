CC = g++
CPPFLAGS = -g -std=c++17\
			-Wall -Wextra\
			-pedantic\
			-fsanitize=address\
			-fsanitize=signed-integer-overflow\
			-fsanitize=undefined 

INCLUDES = . 

TARGET = myprog

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(TARGET).c 

.PHONY: clean
clean:
	$(RM) $(TARGET)
