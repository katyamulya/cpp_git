NAME = fragtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJ = ${SRC:.cpp=.o}

CC = c++
CFLAGS = -std=c++17 -Wall -Wextra -Werror

all:	${NAME}

%.o: %.cpp ${HEADERS}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re