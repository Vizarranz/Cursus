/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzambran <vzambran@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:08:23 by vzambran          #+#    #+#             */
/*   Updated: 2024/12/23 16:57:08 by vzambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dst;
	size_t	i;

	if (!src && !dst)
		return (NULL);
	c_src = (char *)src;
	c_dst = (char *)dst;
	i = 0;
	if (c_dst > c_src)
		while (n-- > 0)
			c_dst[n] = c_src[n];
	else
	{
		while (i++ < n)
		{
			c_dst[i] = c_src[i];
		}
	}
	return (dst);
}
