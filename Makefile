# Source files
SRCS =	main.c \
		errors.c \
		manage_input.c \
		push.c \
		rotate.c \
		rrotate.c \
		sort_big.c \
		sort_small.c \
		swap.c \
		utils_sort_small.c \
		utils.c \

# Object files
OBJS = ${SRCS:.c=.o}

# Target binary name
NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
RM = rm -f
LIBFTDIR = inc/Libft/
LIBFT_LIB = inc/Libft/libft.a
PRINTFDIR = inc/Printf/
PRINTF_LIB = inc/Printf/libftprintf.a
HEADER = push_swap.h

# Link Libft and Printf
INCLUDE_LIBS = -L $(LIBFTDIR) -lft -L $(PRINTFDIR) -lftprintf

# Build everything
all: make_libft make_printf $(NAME)

# Compile .c to .o
.c.o:
	${CC} ${CFLAGS} -c $< -o $@

# Build the program
$(NAME): $(OBJS) Makefile $(LIBFT_LIB) $(PRINTF_LIB) $(HEADER)
	${CC} ${CFLAGS} $(OBJS) -o ${NAME} ${INCLUDE_LIBS}

# Build libft
make_libft:
	make -C $(LIBFTDIR)

# Build Printf
make_printf:
	make -C $(PRINTFDIR)

# Clean objects
clean:
	${RM} ${OBJS}
	@cd $(LIBFTDIR) && $(MAKE) clean
	@cd $(PRINTFDIR) && $(MAKE) clean

# Clean all files
fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean
	@cd $(PRINTFDIR) && $(MAKE) fclean

# Rebuild project
re: fclean all

.PHONY: all clean fclean re