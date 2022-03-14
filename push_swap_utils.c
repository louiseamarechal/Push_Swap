/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:23:21 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/14 11:57:17 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	del_content(void *content)
// {
// 	free(content[0]);
// 	free(content[1]);
// 	free(content);
// }

int	ft_error(char *message, t_list **a)
{
	// (void)a;
	ft_printf("%s\n", message);
	ft_lstclear(a, &free); //to add parameter wtf
	ft_print_tab(a);
	exit(EXIT_FAILURE);
}

t_list	**ft_build_a(t_list **a, char **args, int cmpt, int argc)
{
	int		n;
	int		j;
	t_list	*lstnew;
	int		*nb;

	if (argc == 2)
		j = 0;
	else
		j = 1;
	while (j < cmpt)
	{
		if (ft_check_atoi(args[j]) && is_unique(ft_atoi(args[j]), *a))
		{
			nb = malloc(sizeof(int) * 1);
			if (nb == NULL)
				return (NULL);
			n = ft_atoi(args[j++]);
			*nb = n;
			lstnew = ft_lstnew(nb);
			ft_lstadd_back(a, lstnew);
		}
		else
			ft_error("Error", a);
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

int	ft_check_atoi(char *tab)
{
	if (*tab == '-' || *tab == '+')
	{
		if (*tab == '-')
		{
			tab++;
			if (ft_strlen(tab) >= 10)
			{
				if (ft_strncmp("2147483648",tab, 11) < 0)
					return (0);
			}
		}
		tab++;
	}
	if (ft_strlen(tab) > 10)
		return (0);
	else if (ft_strlen(tab) == 10)
	{
		if (ft_strncmp("2147483647",tab, 10) < 0)
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
