# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsidler <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 11:09:55 by fsidler           #+#    #+#              #
#    Updated: 2015/12/02 11:50:04 by fsidler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = libft.h

SRC = ft_isascii.c \
	  ft_isprint.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_atoi.c \
	  ft_bzero.c \
	  ft_memccpy.c \
	  ft_memcpy.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_memcmp.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strdup.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strlen.c \
	  ft_strlcat.c

OBJ = $(SRC:.c=.o)

$(NAME): 
			@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADERS)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)

all: $(NAME)

clean:		
			@rm -f $(OBJ)

fclean:	clean	
			@rm -f $(NAME)

re: fclean all
