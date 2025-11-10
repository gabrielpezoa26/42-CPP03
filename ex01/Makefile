NAME = ScavTrap
OBJECTS = objects/main.o objects/ClapTrap.o objects/ScavTrap.o
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ_DIR = objects

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)


objects/main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o objects/main.o

objects/ClapTrap.o: ClapTrap.cpp
	$(CC) $(CFLAGS) -c ClapTrap.cpp -o objects/ClapTrap.o

objects/ScavTrap.o: ScavTrap.cpp
	$(CC) $(CFLAGS) -c ScavTrap.cpp -o objects/ScavTrap.o

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

re: fclean all