/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:18:24 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/23 15:43:35 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_list(t_list **a, int argc, int cmpt)
{
	t_list	**b;
	int		*tab;

	tab = ft_calloc(sizeof(int), ft_lstsize(*a));
	b = ft_calloc(sizeof(b), 1);
	ft_number_a(*a, cmpt, tab);
	if ((argc - 1) == 2 || cmpt == 2)
		sort_list_two(a);
	else if ((argc - 1) == 3 || cmpt == 3)
		sort_list_three(a);
	else if ((argc - 1) == 4 || cmpt == 4)
		sort_list_four(a, b);
	else if ((argc - 1) == 5 || cmpt == 5)
		sort_list_five(a, b);
	else if ((argc - 1) > 5 || cmpt > 5)
		sort_big_list(a, b);
	ft_lstclear(b, &free);
	free(tab);
}

int	main(int argc, char **argv)
{
	t_list	**a;
	char	**args;
	int		cmpt;

	if (argc == 1)
		return (1);
	cmpt = 0;
	a = ft_calloc(sizeof(a), 1);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		while (args[cmpt])
			cmpt++;
		a = ft_build_a(args, cmpt, argc, a);
		// free_tab(args);
	}
	else if (argc > 2)
	{
		cmpt = argc;
		a = ft_build_a(argv, cmpt, argc, a);
	}
	if (is_sorted_a(*a) == 1)
		return (0);
	sort_list(a, argc, cmpt);
	ft_lstclear(a, &free);
	return (0);
}
