# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/06 15:39:20 by ashabdan          #+#    #+#              #
#    Updated: 2020/07/09 13:41:40 by ashabdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Werror -Wextra
NAME := libft.a

INC_DIR := ./includes/
SRC_DIR := ./srcs/
OBJ_DIR := ./objs/
SUBDIRS := mem str ctype count conv io lst_bonus

SRC_DIRS := $(addprefix $(SRC_DIR), $(SUBDIRS))
SRCS := $(wildcard $(addsuffix /*.c, $(SRC_DIRS)))

OBJ_DIRS := $(addprefix $(OBJ_DIR), $(SUBDIRS))
ALL_OBJS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS:.c=.o))
MAIN_OBJS := $(patsubst ./objs/lst_bonus%, , $(ALL_OBJS))


.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(ALL_OBJS)
	@ar rc $(NAME) $(MAIN_OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIRS)
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(INC_DIR)

bonus:  $(ALL_OBJS)
	@ar rc $(NAME) $(ALL_OBJS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
