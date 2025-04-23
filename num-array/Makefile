TARGET = num-array
CC = cc -Wall -Werror -Wextra -Iincludes
SRCS = clear.c get.c set.c
OBJS = main.o clear.o get.o set.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: clean fclean re
