/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:18:36 by lmarecha          #+#    #+#             */
/*   Updated: 2022/02/18 14:49:47 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l;
	t_list	*temp;

	l = *lst;
	if (l == NULL)
		return ;
	while (l)
	{
		temp = l->next;
		del(l->content);
		free(l);
		l = temp;
	}
	*lst = NULL;
}
