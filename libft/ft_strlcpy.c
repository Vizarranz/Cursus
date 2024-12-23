/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzambran <vzambran@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:30:39 by vzambran          #+#    #+#             */
/*   Updated: 2024/12/23 19:18:55 by vzambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len++ < dstsize)
		ft_memcpy(dst, src, src_len++);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize--);
		dst[dstsize--] = 0;
	}
	return (src_len);
}
