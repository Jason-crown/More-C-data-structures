CC = gcc

CFLAGS = -Wall -Wextra -std=c11 -Iinclude

TARGET = data_structures

SRC = main.c stack.c queue.c

OBJ = $(SRC:.c=.o)


$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


run: $(TARGET)
	.\$(TARGET).exe


clean:
	del /Q *.o $(TARGET).exe 2>NUL