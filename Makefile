CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

TARGET = linked_list

SRC = main.c linked_list.c
OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q *.o $(TARGET).exe 2>NUL

run: $(TARGET)
	.\$(TARGET).exe