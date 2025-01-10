SRCS = ft_printf.c \
       ft_printf_functions.c \

# Object files
OBJS = ${SRCS:.c=.o}

# Target settings
NAME = libftprintf.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

%.o: %.c Makefile ft_printf.h
	$(CC) $(CFLAGS) -I. -c $< -o $(<:.c=.o)

# Default target
all: ${NAME}

# Create static library
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

# Clean up object files
clean:
	${RM} ${OBJS}

# Clean and remove the library
fclean: clean
	${RM} ${NAME}

# Rebuild the project
re: fclean all
