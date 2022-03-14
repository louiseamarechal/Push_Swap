/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:14:55 by louisea           #+#    #+#             */
/*   Updated: 2022/03/14 14:54:46 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_copy_a(t_list *a)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize(a));
	while (a)
	{
		tab[i] = *(int *)a->content;
		a = a->next;
		i++;
	}
	return (tab);
}

int	*ft_sort_a(t_list *a)
{
	int	*tab;
	int	j;
	int x;
	int	i;

	tab = ft_copy_a(a);
	i = 0;
	x = 0;
	while (i < ft_lstsize(a))
	{
		j = i + 1;
		while (j < ft_lstsize(a))
		{
			if (tab[j] < tab[i])
			{
				x = tab[i];
				tab[i] = tab[j];
				tab[j] = x;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	ft_number_a(t_list *a, int argc)
{
	int *content;
	int	i;
	int	*nb;

	content = ft_sort_a(a);
	while (a)
	{
		i = 0;
		while (i < argc)
		{
			if (content[i] == *(int *)a->content)
			{
				nb = malloc(sizeof(int) * 1);
				if (nb != NULL)
				{
					*nb = i;
					a->content = nb;
					break ;
				}
			}
			i++;
		}
		a = a->next;
	}
}

void	sort_big_stack(t_list **a, t_list **b)
{
	t_list	*temp;
	int		max_bits;
	int		a_size;
	int		i;
	int		j;
	int		num;

	a_size = ft_lstsize(*a);
	max_bits = 0;
	while (((ft_lstsize(*a) - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < a_size)
		{
			temp = *a;
			num = *(int *)temp->content;
			if ((num >> i) % 2 == 1)
				rotate_a(a);
			else
				push_b(a, b);
			j++;
		}
		while (*b)
			push_a(a, b);
		i++;
	}
}
