CC := gcc
INC_DIR := ./includes/
SRC_DIR := ./srcs/
OBJ_DIR := ./objs/
SUBDIRS := mem str
CFLAGS := -Wall -Werror -Wextra
SRC_DIRS := $(addprefix $(SRC_DIR), $(SUBDIRS))
OBJ_DIRS := $(addprefix $(OBJ_DIR), $(SUBDIRS))
SRCS := $(wildcard $(addsuffix /*.c, $(SRC_DIRS)))
OBJS := $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRCS:.c=.o))
NAME := libft.a

.PHONY: all clean fclean re


all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIRS)
	@$(CC) -o $@ -c $< $(CFLAGS) -I $(INC_DIR)
	
clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
