# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashabdan <ashabdan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/06 15:39:20 by ashabdan          #+#    #+#              #
#    Updated: 2020/09/17 19:03:45 by ashabdan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Werror -Wextra
NAME := libft.a

INC_DIR := ./includes/
SRC_DIR := ./srcs/
OBJ_DIR := ./objs/
SUBDIRS := mem str ctype count conv io
BONUS_SUBDIR := lst_bonus

SRC_DIRS := $(addprefix $(SRC_DIR), $(SUBDIRS))
SRCS := $(wildcard $(addsuffix /*.c, $(SRC_DIRS)))

OBJ_DIRS := $(addprefix $(OBJ_DIR), $(SUBDIRS))
OBJS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS:.c=.o))

BONUS_SRC_PATH := $(addprefix $(SRC_DIR), $(BONUS_SUBDIR))
BONUS_OBJ_PATH := $(addprefix $(OBJ_DIR), $(BONUS_SUBDIR))
BONUS_SRCS := $(wildcard $(addsuffix /*.c, $(BONUS_SRC_PATH)))
BONUS_OBJS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(BONUS_SRCS:.c=.o))

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus: $(BONUS_OBJS)
	@ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	@ranlib $(NAME)

$(BONUS_OBJ_PATH)%.o: $(BONUS_SRC_PATH)%.c
	@mkdir -p $(BONUS_OBJ_PATH)
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(INC_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIRS)
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(INC_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
