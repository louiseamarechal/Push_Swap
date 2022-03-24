/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations_b.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:40:00 by louisea           #+#    #+#             */
/*   Updated: 2022/03/22 10:41:30 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_tab(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	push_tab(t_list **src, t_list **dest)
{
	t_list	*temp;

	temp = *src;
	*src = temp->next;
	temp->next = NULL;
	ft_lstadd_front(dest, temp);
}

void	swap_b(t_list **b)
{
	if (b != NULL)
	{
		swap_a(b);
		ft_printf("sb\n");
	}
}

void	push_b(t_list **a, t_list **b)
{
	if (a != NULL)
	{
		push_tab(a, b);
		ft_printf("pb\n");
	}
}
