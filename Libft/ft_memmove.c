/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:30:38 by lmarecha          #+#    #+#             */
/*   Updated: 2022/02/18 15:14:24 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cmpt;
	char	*destination;
	char	*source;

	if (!dst && !src)
		return (0);
	cmpt = 0;
	source = (char *)src;
	destination = (char *)dst;
	if (source < destination)
	{
		while (len > cmpt)
		{
			destination[len - 1] = source[len - 1];
			len--;
		}
	}
	while (cmpt < len)
	{
		destination[cmpt] = source[cmpt];
		cmpt++;
	}
	return (dst);
}
