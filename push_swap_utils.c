/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:23:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/24 16:53:56 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(t_list **a)
{
	write(2, "Error\n", 6);
	ft_lstclear(a, &free);
	free(a);
	exit(EXIT_FAILURE);
}

t_list	**ft_build_a(char **args, int cmpt, int argc, t_list **a)
{
	int		j;
	t_list	*lstnew;
	int		*nb;

	j = 1;
	if (argc == 2)
		j = 0;
	while (j < cmpt)
	{
		if (ft_check_atoi(args[j]) && is_unique(ft_atoi(args[j]), *a))
		{
			nb = ft_calloc(sizeof(int), 1);
			if (nb == NULL)
				return (NULL);
			*nb = ft_atoi(args[j++]);
			lstnew = ft_lstnew(nb);
			if (!lstnew)
				ft_error(a);
			ft_lstadd_back(a, lstnew);
		}
		else
			ft_error(a);
	}
	return (a);
}

int	is_unique(int n, t_list *a)
{
	while (a)
	{
		if (*(int *)(a->content) == n)
			return (0);
		a = a->next;
	}
	return (1);
}

int	operator_test(char *tab)
{
	int	i;

	i = 0;
	if (*tab == '-' || *tab == '+')
	{
		if (*tab == '-')
		{
			tab++;
			if (!ft_isdigit(*tab))
				return (0);
			while (tab[i])
			{
				if (!ft_isdigit(tab[i]))
					return (0);
				i++;
			}
			if (ft_strlen(tab) >= 10)
			{
				if (ft_strncmp("2147483648", tab, 11) < 0)
					return (0);
			}
		}
	}
	return (1);
}

int	ft_check_atoi(char *tab)
{
	if (!operator_test(tab))
		return (0);
	if (*tab == '-' || *tab == '+')
	{
		if (*tab == '-' && operator_test(tab))
			return (1);
		tab++;
	}
	if (ft_strlen(tab) > 10)
		return (0);
	else if (ft_strlen(tab) == 10)
	{
		if (ft_strncmp("2147483647", tab, 10) < 0)
			return (0);
	}
	while (*tab)
	{
		if (ft_isdigit(*tab) == 0)
			return (0);
		tab++;
	}
	return (1);
}
