/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:58:41 by lmarecha          #+#    #+#             */
/*   Updated: 2022/02/18 15:14:26 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*array;

	i = 0;
	array = (unsigned char *)b;
	while (i < len)
	{
		array[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
