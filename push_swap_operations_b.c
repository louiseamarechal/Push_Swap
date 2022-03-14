/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:40:00 by louisea           #+#    #+#             */
/*   Updated: 2022/03/01 12:23:48 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list *b)
{
	// Swap the first 2 elements at the top of stack b.
	if (b != NULL)
	{
		swap_a(b);
		ft_printf("sb");
	}
}

void	push_b(t_list **a, t_list **b)
{
// 	Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
	if (a != NULL)
	{
		push_tab(a, b);
		ft_printf("pb\n");
	}
}

// void	rotate_b(t_list *b)
// {
// 	/* code */
// 	// rb (rotate b): Shift up all elements of stack b by 1.
// 	// The first element becomes the last one.
	// rotate_a(b);
	// ft_printf("rb");
// }

// void	reverse_rotate_b(t_list *b)
// {
// 	// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// 	// The last element becomes the first one.
	// reverse_rotate_a(b);
	// ft_printf("rrb");
// }
