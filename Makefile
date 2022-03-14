# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 16:17:09 by lmarecha          #+#    #+#              #
#    Updated: 2022/03/14 17:50:46 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c debugger.c push_swap_utils.c push_swap.c linked_list_utils.c  push_swap_operations_a.c \
		push_swap_operations_b.c sort_small_list.c

CC = clang

CFLAGS = -Wall -Werror -Wextra #-g3 -fsanitize=address

OBJ = $(SRC:.c=.o)

LIBFT = Libft

LIBFTA = Libft/libft.a

PRINTF = Printf

PRINTFA = Printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	make -C $(PRINTF)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFTA) $(PRINTFA)

clean:
	make clean -C $(LIBFT)
	make clean -C $(PRINTF)
	/bin/rm -f *.o

fclean: clean
	make fclean -C $(LIBFT)
	make fclean -C $(PRINTF)
	/bin/rm -f $(NAME)

.c.o: $(addprefix , push_swap.h)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) #-I Libft

re: fclean all

.PHONY: all clean fclean re
