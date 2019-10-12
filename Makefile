# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/24 19:39:58 by ashabdan          #+#    #+#              #
#    Updated: 2019/10/10 21:57:39 by ashabdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I. -c

SRC =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_putchar.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_power.c \
		ft_numlen.c \
		ft_lstnew.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstrev.c \
		ft_isprime.c \
		ft_swapbits.c

OBJ = $(SRC:.c=.o)

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJ)
fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c

it:
	gcc -Wall -Wextra -Wextra -o test $(SRC)