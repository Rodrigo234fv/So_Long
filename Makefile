# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:33:17 by rode-alb          #+#    #+#              #
#    Updated: 2022/12/12 16:25:22 by rodrigo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

FILES =		./get_next_line/get_next_line_utils.c \
			./get_next_line/get_next_line.c \
			./libft/ft_substr.c \
			./libft/ft_strlen.c \
			./libft/ft_strdup.c \
			create_images.c \
			make_map.c \
			read_map.c \
			utils.c \
			main.c
	


OBJS = $(FILES:.c=.o)

CC = cc

MLXFLAG = -lmlx -lXext -lX11
CFLAGS = -Wall -Wextra -Werror

MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

NAME = so_long.a

all: $(NAME)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		$(MSG1)

clean: 
		rm -f $(OBJS)
		$(MSG2)
fclean: clean
		rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all, clean, fclean, re