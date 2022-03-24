/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:14:55 by louisea           #+#    #+#             */
/*   Updated: 2022/03/24 10:35:55 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copy_a(t_list *a, int *tab)
{
	int	i;
	// int	*tab;

	i = 0;
	// free(tab); ---- check with this
	// tab = ft_calloc(sizeof(int), ft_lstsize(a)); ---- old version
	while (a)
	{
		tab[i] = *(int *)a->content;
		a = a->next;
		i++;
	}
	// return (tab);
}

void	ft_sort_a(t_list *a, int *tab)
{
	int	j;
	int	x;
	int	i;
	// int	*tab;

	// tab = ft_copy_a(a);
	ft_copy_a(a, tab);
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
	// return (tab);
}

void	ft_number_a(t_list *a, int argc, int *tab)
{
	int	i;
	int	*nb;
	// int	*content;

	// content = ft_sort_a(a); --- old version
	ft_sort_a(a, tab);
	while (a)
	{
		i = 0;
		while (i < argc)
		{
			if (tab[i] == *(int *)a->content)
			{
				nb = ft_calloc(sizeof(int), 1);
				if (nb != NULL)
				{
					*nb = i;
					free(a->content);
					a->content = nb;
					break ;
				}
			}
			i++;
		}
		a = a->next;
	}
	// free(tab); ---- check with this or the one from ft_copy_a or both
}

void	sort_large_list(t_list **a, t_list **b, int max_bits, int a_size)
{
	int		i;
	int		j;
	int		num;
	t_list	*temp;

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

void	sort_big_list(t_list **a, t_list **b)
{
	int		max_bits;
	int		a_size;

	a_size = ft_lstsize(*a);
	max_bits = 0;
	while (((a_size - 1) >> max_bits) != 0)
		max_bits++;
	sort_large_list(a, b, max_bits, a_size);
}
