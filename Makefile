# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: patrisor <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/22 07:54:53 by patrisor          #+#    #+#              #
#    Updated: 2019/05/13 23:01:25 by patrisor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Werror -Wall -Wextra

SRCS = ft_atoi.c \
	   ft_add.c \
	   ft_bzero.c \
	   ft_countwords.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isodd.c \
	   ft_isupper.c \
	   ft_islower.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_strnew.c \
	   ft_strinit.c \
	   ft_lstadd.c \
	   ft_lstat.c \
	   ft_lstdel.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_lstlen.c \
	   ft_lstrev.c \
	   ft_lstcount.c \
	   ft_memdel.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_nmemset.c \
	   ft_pow.c \
	   ft_putchar.c \
	   ft_putchar_fd.c \
	   ft_putendl.c \
	   ft_putendl_fd.c \
	   ft_putstr.c \
	   ft_putstr_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_sqrt.c \
	   ft_strcat.c \
	   ft_strlen.c \
	   ft_strcpy.c \
	   ft_strlcat.c \
	   ft_strncat.c \
	   ft_strchange.c \
	   ft_strchr.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strequ.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strndup.c \
	   ft_strnequ.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strtrim.c \
	   ft_splitdel.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_swap.c \
	   get_next_line.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -c
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all

coffee:
	@sh ignore

.PHONY: clean fclean all re coffee
