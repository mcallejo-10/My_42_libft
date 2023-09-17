# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miranda <miranda@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 11:49:07 by miranda           #+#    #+#              #
#    Updated: 2023/09/16 16:45:03 by miranda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum ft_isascii.c ft_isprint.c \
	 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	 ft_strlcpy.c ft_strlcat ft_toupper.c ft_tolower.c ft_strchr.c \
	 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	 ft_atoi.c ft_calloc.c ft_strdup.c \
#crea el nombre de los archivos .o
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

#objetivo para hacer todo el programa
all: $(NAME)

#crea el archivo de la librería
$(NAME): &(OBJECTS)
	$(AR) -r $@ $? 
#porque $@ $?: reglas automáticas de make, para expandir el nombre, y para ver las actualizadas

#compila los .c
%.o: %.c
	$(CC) $(CFLAGS)

clean: %.o 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all