NAME = libft.a

SRC_DIR = ./src
OBJ_DIR = ./obj

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_bzero.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c ft_memchr.c \
	ft_memcmp.c ft_memmove.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

INCLUDE = libft.h

#crea los archivos .o
OBJECTS = $(addprefix $(OBJ_DIR)/,$(notdir $(SOURCES:.c=.o)))

DEPS = $(OBJECTS:.o=.d)

CFLAGS = -Wall -Werror -Wextra -MMD

CC = gcc

#objetivo para hacer doc de la libreria
all: $(NAME)

# Incluir las reglas de dependencias generadas por el compilador
-include $(DEPS)

# Generar las dependencias
$(OBJ_DIR)/%.d: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) -MM -MF $@ -MT $(@:.d=.o) $(CFLAGS) $<
#compila los .c y genera las dependencias
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile
	mkdir -p $(OBJ_DIR)
	$(CC) -c $(CFLAGS) -I ./ -MMD -MP -MF $(OBJ_DIR)/$*.d -c $< -o $@

#crea el archivo de la librería
$(NAME): $(OBJECTS)
	$(AR) -rsc $@ $^ 

clean:
	rm -rf $(OBJ_DIR) $(DEPS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
-include $(DEPS)

.PHONY: all clean fclean re