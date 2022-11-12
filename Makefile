# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 16:18:33 by hmesrar           #+#    #+#              #
#    Updated: 2022/11/12 16:18:33 by hmesrar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =

$(NAME): $(OBJS)
	$(AR) $@ $^
	@echo "\n$(GREEN)--> Libft Library created!\n$(DEF_COLOR)"

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "$(RED)--> Objects cleaned successfully!\n$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)--> Full clean successfully!\n$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)--> Refresh successfully!\n$(DEF_COLOR)"

.PHONY: bonus all clean fclean re

#Colors
DEF_COLOR =\033[0;39m
GREEN =\033[0;92m
RED =\033[0;91m
Footer
