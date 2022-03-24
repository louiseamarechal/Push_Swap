/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:34:50 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/21 01:27:34 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a)
{
	t_list	*temp;

	temp = *a;
	if (temp->next != NULL)
		swap_tab(temp->content, temp->next->content);
	ft_printf("sa\n");
}

void	push_a(t_list **a, t_list **b)
{
	if (b != NULL)
	{
		push_tab(b, a);
		ft_printf("pa\n");
	}
}

void	rotate_a(t_list **a)
{
	t_list	*temp;

	temp = *a;
	while (temp->next)
	{
		swap_tab(temp->content, temp->next->content);
		temp = temp->next;
	}
	ft_printf("ra\n");
}

void	reverse_rotate_a(t_list **a)
{
	t_list	*last;
	t_list	*temp;

	temp = *a;
	last = ft_lstlast(*a);
	*a = last;
	last->next = temp;
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	ft_printf("rra\n");
}
