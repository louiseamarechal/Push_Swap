/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:31:59 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/14 17:53:07 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_list_three(t_list **a)
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
		//reverse_rotate_a(a);
	}
	else if ((num1 > num2) && (num2 < num3) && (num1 > num3))
		rotate_a(a);
	else if ((num1 < num2) && (num2 > num3) && (num1 < num3))
	{
		swap_a(a);
		rotate_a(a);
	}
	// else if ((num1 < num2) && (num2 > num3) && (num1 > num3))
	// 	reverse_rotate_a(a);
}
