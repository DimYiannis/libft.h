# Makefile for libft

# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

# Target name (the final library file)
NAME    = libft.a

# Source and object files
SRC     = ft_strlen.c ft_strcpy.c ft_strcmp.c ft_strdup.c ft_memset.c \
          ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c
OBJ     = $(SRC:.c=.o)

# Rule to create the library file
all: $(NAME)

# Compiling rule to create object files (.o) from source files (.c)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the static library (libft.a)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Clean rule to remove object files
clean:
	rm -f $(OBJ)

# Fclean rule to remove object files and the library
fclean: clean
	rm -f $(NAME)

# Recompile everything from scratch
re: fclean all
