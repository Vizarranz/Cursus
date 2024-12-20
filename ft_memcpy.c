/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzambran <vzambran@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:10:52 by vzambran          #+#    #+#             */
/*   Updated: 2024/09/30 18:49:55 by vzambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	if (!src && !dst)
	{
		return (dst);
	}
	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	while (n > 0)
	{
		(*aux_dst++) = (*aux_src++);
		n--;
	}
	return (dst);
}
