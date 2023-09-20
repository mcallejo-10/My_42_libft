NAME = libft.a


SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_bzero.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c ft_memchr.c \
	ft_memcmp.c ft_memmove.c

INCLUDE = libft.h

#crea los archivos .o
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

#objetivo para hacer doc de la libreria
all: $(NAME)

#crea el archivo de la librería
$(NAME): $(OBJECTS)
	$(AR) -r $@ $? 
#porque $@ $?: reglas automáticas de make,\
para expandir el nombre, y para ver las actualizadas

#compila los .c
%.o: %.c
	$(CC) -c $(CFLAGS) $? 

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all