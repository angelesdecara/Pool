CC=gcc

CFLAGS = -Wall -Werror -Wextra

SRCS	= CountLineBreaks.c Str2Mapa.c getLines.c sizefile.c Lectura.c ft_strncpy.c main.c getCols.c

OBJS = ${SRCS:.c=.o}

NAME = bsq

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all: ${NAME}

clean:
	rm -rf  ./bsq ${OBJS}

fclean: clean
		rm ${NAME}

sane:
	${CC} ${CFLAGS} ${SRCS} -g3 -fsanitize=address *.c 
