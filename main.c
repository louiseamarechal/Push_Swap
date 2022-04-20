/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:18:24 by lmarecha          #+#    #+#             */
/*   Updated: 2022/03/24 17:16:02 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_list(t_list **a, int argc, int cmpt)
{
	t_list	**b;
	int		*tab;

	tab = ft_calloc(sizeof(int), ft_lstsize(*a));
	b = ft_calloc(sizeof(b), 1);
	if (tab != NULL && b != NULL)
	{
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
		free(b);
		free(tab);
	}
	return (0);
}

int	create_a(int argc, t_list **a, char **argv)
{
	char	**args;
	int		cmpt;

	cmpt = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		while (args[cmpt])
			cmpt++;
		a = ft_build_a(args, cmpt, argc, a);
		free_tab(args);
		return (cmpt);
	}
	else if (argc > 2)
	{
		cmpt = argc;
		a = ft_build_a(argv, cmpt, argc, a);
		return (cmpt);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	**a;
	int		cmpt;

	if (argc == 1)
		return (1);
	a = ft_calloc(sizeof(a), 1);
	if (a == NULL)
		return (0);
	cmpt = create_a(argc, a, argv);
	if (cmpt != 0)
	{
		if (is_sorted_a(*a) == 1)
			return (0);
		sort_list(a, argc, cmpt);
		ft_lstclear(a, &free);
		free(a);
	}
	return (0);
}
