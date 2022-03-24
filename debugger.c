/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugger.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:37:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/21 15:39:12 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_tab(t_list **list)
{
	t_list	*elem;

	elem = *list;
	printf("LIST = \n");
	while (elem)
	{
		printf("\n%d", *(int *)(elem->content));
		elem = elem->next;
	}
}

void	ft_print_int(int *tab, t_list *a)
{
	int	i;

	i = 0;
	printf("lst size = %d\n", ft_lstsize(a));
	while (i < ft_lstsize(a))
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}
