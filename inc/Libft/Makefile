# Source files
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isprint.c \
       ft_isascii.c \
       ft_strlen.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_strdup.c \
       ft_calloc.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_lstnew_bonus.c \
       ft_lstadd_front_bonus.c \
       ft_lstsize_bonus.c \
       ft_lstlast_bonus.c \
       ft_lstadd_back_bonus.c \
       ft_lstdelone_bonus.c \
       ft_lstclear_bonus.c \
       ft_lstiter_bonus.c \
       ft_lstmap_bonus.c
	

# Object files
OBJS = ${SRCS:.c=.o}
# OBJSB = ${SRCSB:.c=.o}

# Target settings
NAME = libft.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

# Default target
all: ${NAME}

# Create static library
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

# Bonus target
# bonus: ${OBJS} ${OBJSB} 
	# ar rc ${NAME} ${OBJS} ${OBJSB}
	# ranlib ${NAME}

# Clean up object files
clean:
	${RM} ${OBJS} ${OBJSB}

# Clean and remove the library
fclean: clean
	${RM} ${NAME}

# Rebuild the project
re: fclean all

