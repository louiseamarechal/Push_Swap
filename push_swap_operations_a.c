/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations_a.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:34:50 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/14 17:52:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_tab(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void push_tab(t_list **src, t_list **dest)
{
	t_list	*temp;

	temp = *src;
	*src = temp->next;
	temp->next = NULL;
	ft_lstadd_front(dest, temp);
}

void	swap_a(t_list **a)
{
	// Swap the first 2 elements at the top of stack a.
	t_list	*temp;

	temp = *a;
	if (temp->next != NULL)
		swap_tab(temp->content, temp->next->content);
	ft_printf("sa\n");
}

void	push_a(t_list **a, t_list **b)
{
	// Take the first element at the top of b and put it at the top of a.
	// Do nothing if b is empty.
	if (b != NULL)
	{
		// while (*b)
		push_tab(b, a);
		ft_printf("pa\n");
	}
}

void	rotate_a(t_list **a)
{
	// ra (rotate a): Shift up all elements of stack a by 1.
	// The first element becomes the last one.
	t_list *temp;

	temp = *a;
	while(temp->next)
	{
		swap_tab(temp->content, temp->next->content);
		temp = temp->next;
	}
	ft_printf("ra\n");
}

// void	reverse_rotate_a(t_list *a)
// {
// 	// rra (reverse rotate a): Shift down all elements of stack a by 1.
// 	// The last element becomes the first one.
// 	int		*temp;
// 	t_list	*lst;
//
// 	lst = ft_lstlast(a);
// 	temp = malloc(sizeof(int) * 1);
// 	temp = (int *)lst->content;
// 	swap_tab(a->content, temp);
// 	free(temp);
// 	ft_printf("rra\n");
// }
