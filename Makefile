# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -Iincludes

# Target name (the final library file)
NAME    = libft.a

# Directories
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes

# Source and object files
SRC     = $(wildcard $(SRC_DIR)/*.c)             # Finds all .c files in src/
OBJ     = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Rule to create the library file
all: $(NAME)

# Rule to create object files in obj/ from source files in src/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the static library (libft.a)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean rule to remove object files
clean:
	rm -f $(OBJ)

# Fclean rule to remove object files and the library
fclean: clean
	rm -f $(NAME)

# Recompile everything from scratch
re: fclean all
