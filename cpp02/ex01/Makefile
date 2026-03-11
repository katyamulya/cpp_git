NAME = fixed

SRC = main.cpp Fixed.cpp

HEADER = Fixed.hpp

OBJ = ${SRC:.cpp=.o}

CC = c++
CFLAGS = -std=c++17 -Wall -Wextra -Werror

all:	${NAME}

%.o: %.cpp ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re