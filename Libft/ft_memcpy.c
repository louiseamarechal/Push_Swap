/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:28:14 by lmarecha          #+#    #+#             */
/*   Updated: 2022/02/18 15:14:21 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str1;

	i = 0;
	str = (char *)dst;
	str1 = (char *)src;
	if (!str && !str1)
		return (NULL);
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dst);
}
