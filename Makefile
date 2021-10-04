# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sochoi <sochoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 17:56:31 by sochoi            #+#    #+#              #
#    Updated: 2021/07/26 17:56:31 by sochoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ss_isnum.c \
			srcs/ss_atoi.c \
			srcs/ss_split.c \
			srcs/ss_free_strs.c \
			srcs/ss_strlen.c \
			srcs/ss_substr.c \
			srcs/ss_print.c \
			srcs/ss_compares.c \
			srcs/ss_strcat.c \
			srcs/ss_find.c \
			srcs/ss_strdup.c

OBJ		=	$(SRCS:.c=.o)
NAME	=	sochoi_strings.a

all		:	$(NAME)

.c.o	:
			gcc -Wall -Werror -Wextra -c $< -o $@

$(NAME)	:	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean	:
			rm -f $(OBJ)

fclean	:
			rm -f $(OBJ)
			rm -f $(NAME)

re		:	fclean all