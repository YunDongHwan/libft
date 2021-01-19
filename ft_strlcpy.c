/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 02:12:10 by doyun             #+#    #+#             */
/*   Updated: 2021/01/19 05:17:12 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t idx;

	idx = 0;
	if (!dst && !src)
		return (0);
	if (dstsize > 0)
	{
		while (idx < dstsize - 1 && src[idx] != '\0')
		{
			dst[idx] = src[idx];
			idx++;
		}
		dst[idx] = '\0';
	}
	while (src[idx])
		idx++;
	return (idx);

}
