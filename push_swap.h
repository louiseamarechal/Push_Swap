/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:36:36 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/14 17:52:33 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft/libft.h"
# include "Printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

int		ft_check_atoi(char *tab);
t_list	**ft_build_a(t_list **a, char **argv, int cmpt, int argc);
int		is_unique(int n, t_list *a);
void	swap_a(t_list **a);
void	rotate_a(t_list **a);
void	reverse_rotate_a(t_list *a);
void	push_tab(t_list **src, t_list **dest);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
// t_list	*ft_build_b(t_list *a);
void	swap_tab(int *a, int *b);
int		*ft_sort_a(t_list *a);
void	ft_number_a(t_list *a, int argc);
void	sort_big_list(t_list **a, t_list **b);
int		*ft_copy_a(t_list *a);
void	ft_sort_list_three(t_list **a);
// t_list	*push_node(t_list *src, t_list *dest, int position);

// TO DELETE BEFORE PROJECT SUBMISSION
t_list	*del_node(t_list *a, int position);
void ft_print_tab(t_list **list);
void ft_print_int(int *tab, t_list *a);
int	ft_error(char *message, t_list **a);

#endif
