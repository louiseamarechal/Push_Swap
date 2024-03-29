# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 16:17:09 by lmarecha          #+#    #+#              #
#    Updated: 2022/03/24 17:38:19 by lmarecha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c push_swap_utils.c push_swap.c push_swap_operations_a.c \
		push_swap_operations_b.c sort_small_list.c operations_utils.c

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

.c.o: #$(addprefix , push_swap.h)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

re: fclean all

.PHONY: all clean fclean re
