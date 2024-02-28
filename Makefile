
NAME = libft.a

SRC = $(wildcard *.c)

OBJ = ${SRC:.c=.o}
EXE = ${SRC:.c=.exe}

CC = gcc

CFLAG = -Wall -Wextra -Werror

${OBJ}:${SRC}
	${CC} ${CFLAG} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
	@echo "${NAME} created"


clean:
	rm -f ${OBJ}
	rm -f ${EXE}
	@echo "${OBJ} deleted"

fclean: clean
	rm -f ${NAME}
	@echo "${NAME} deleted"

re: fclean all
	@echo "${NAME} ${OBJ} returned"

.PHONY: all clean fclean re