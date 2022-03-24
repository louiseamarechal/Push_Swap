/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:31:59 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/21 01:45:54 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_list_two(t_list **a)
{
	t_list	*temp;
	int		num1;
	int		num2;

	temp = *a;
	num1 = *(int *)temp->content;
	num2 = *(int *)temp->next->content;
	if (num1 > num2)
		swap_a(a);
}

void	sort_list_three(t_list **a)
{
	t_list	*temp;
	int		num1;
	int		num2;
	int		num3;

	temp = *a;
	num1 = *(int *)temp->content;
	num2 = *(int *)temp->next->content;
	num3 = *(int *)temp->next->next->content;
	if ((num1 > num2) && (num2 < num3) && (num1 < num3))
		swap_a(a);
	else if ((num1 > num2) && (num2 > num3) && (num1 > num3))
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	else if ((num1 > num2) && (num2 < num3) && (num1 > num3))
		rotate_a(a);
	else if ((num1 < num2) && (num2 > num3) && (num1 < num3))
	{
		swap_a(a);
		rotate_a(a);
	}
	else if ((num1 < num2) && (num2 > num3) && (num1 > num3))
		reverse_rotate_a(a);
}

void	sort_list_four(t_list **a, t_list **b)
{
	int	small_number_index;

	small_number_index = smallest_number(a);
	if (small_number_index == 1)
		swap_a(a);
	else if (small_number_index == 2)
	{
		rotate_a(a);
		swap_a(a);
	}
	else if (small_number_index == 3)
		reverse_rotate_a(a);
	push_b(a, b);
	sort_list_three(a);
	while (*b)
		push_a(a, b);
}

void	sort_list_five(t_list **a, t_list **b)
{
	int	largest_number_index;

	largest_number_index = largest_number(a);
	if (largest_number_index == 1)
		swap_a(a);
	else if (largest_number_index == 2)
	{
		rotate_a(a);
		swap_a(a);
	}
	else if (largest_number_index == 3)
	{
		reverse_rotate_a(a);
		reverse_rotate_a(a);
	}
	else if (largest_number_index == 4)
		reverse_rotate_a(a);
	push_b(a, b);
	sort_list_four(a, b);
	rotate_a(a);
}
