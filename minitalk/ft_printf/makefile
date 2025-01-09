# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzielins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 13:26:22 by wzielins          #+#    #+#              #
#    Updated: 2024/04/17 17:37:40 by wzielins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

SRC		= 	ft_printf.c \
			ft_printchar.c \
			ft_printstr.c \
			ft_printnbr.c \
			ft_print_point.c \
			ft_print_unsigned.c \
			ft_printpercent.c


OBJ := ${SRC:%.c=%.o}
CC 			= cc
CFLAGS		= -Wall -Wextra -Werror

.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
