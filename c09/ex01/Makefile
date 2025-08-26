NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes
COMPILER = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ${SRC_DIR}/ft_putchar.c\
		${SRC_DIR}/ft_putstr.c\
		${SRC_DIR}/ft_strcmp.c\
		${SRC_DIR}/ft_strlen.c\
		${SRC_DIR}/ft_swap.c

OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
	ar -rcs ${NAME} ${OBJS}

%.o: ${SRC_DIR}/%.c ${INC_DIR}/ft.h
	${COMPILER} ${FLAGS} -I${INC_DIR} -c $< -o ${SRC_DIR}/$@

clean :
	rm -f ${SRC_DIR}/*.o

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re