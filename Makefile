# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wzielins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 16:41:43 by wzielins          #+#    #+#              #
#    Updated: 2024/11/28 16:42:12 by wzielins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
FT_PRINTF = ft_printf/libftprintf.a
LIBFT = libft/libft.a

all: $(SERVER) $(CLIENT)

$(SERVER): server.o $(FT_PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) -o $(SERVER) server.o $(FT_PRINTF) $(LIBFT)
	
$(CLIENT): client.o $(FT_PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) -o $(CLIENT) client.o $(FT_PRINTF) $(LIBFT)

$(FT_PRINTF):
	$(MAKE) -C ft_printf

$(LIBFT):
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C ft_printf clean
	$(MAKE) -C libft clean

fclean: clean
	rm -f $(CLIENT)
	rm -f $(SERVER)

re: fclean all

.PHONY: all clean fclean re