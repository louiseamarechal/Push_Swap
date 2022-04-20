/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:36:36 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/24 16:45:28 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft/libft.h"
# include "Printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

int		ft_check_atoi(char *tab);
t_list	**ft_build_a(char **argv, int cmpt, int argc, t_list **a);
int		is_unique(int n, t_list *a);
void	swap_a(t_list **a);
void	rotate_a(t_list **a);
void	reverse_rotate_a(t_list **a);
void	push_tab(t_list **src, t_list **dest);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	swap_tab(int *a, int *b);
void	ft_number_a(t_list *a, int argc, int *tab);
void	sort_big_list(t_list **a, t_list **b);
void	sort_list_two(t_list **a);
void	sort_list_three(t_list **a);
void	sort_list_four(t_list **a, t_list **b);
int		is_sorted_a(t_list *a);
void	sort_list_five(t_list **a, t_list **b);
int		smallest_number(t_list **a);
int		largest_number(t_list **a);
int		sort_list(t_list **a, int argc, int cmpt);
void	free_tab(char **tab);
void	free_list(t_list *list);

#endif
