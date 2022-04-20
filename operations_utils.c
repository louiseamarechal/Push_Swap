/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louisea <louisea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:41:18 by louisea           #+#    #+#             */
/*   Updated: 2022/03/24 16:43:54 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_list(t_list *list)
{
	void	*victim;

	while (list)
	{
		victim = list;
		list = list->next;
		free(victim);
	}
}

int	is_sorted_a(t_list *a)
{
	t_list	*j;

	while (a->next)
	{
		j = a->next;
		while (j)
		{
			if ((*(int *)j->content) < (*(int *)a->content))
				return (0);
			j = j->next;
		}
		a = a->next;
	}
	return (1);
}

int	smallest_number(t_list **a)
{
	t_list	*temp;
	int		index;

	temp = *a;
	index = 0;
	while (temp)
	{
		if (*(int *)temp->content == 0)
			return (index);
		temp = temp->next;
		index++;
	}
	return (index);
}

int	largest_number(t_list **a)
{
	t_list	*temp;
	int		index;

	temp = *a;
	index = 0;
	while (temp)
	{
		if (*(int *)temp->content == 4)
			return (index);
		temp = temp->next;
		index++;
	}
	return (index);
}
