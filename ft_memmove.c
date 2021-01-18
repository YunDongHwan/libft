/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 18:54:46 by doyun             #+#    #+#             */
/*   Updated: 2021/01/18 03:24:07 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *temp_d;
	unsigned char *temp_s;
	unsigned int idx;
		
	temp_d = (unsigned char *)dst;
	temp_s = (unsigned char *)src;	
	idx = 0;
	if (!dst && !src)
		return (NULL);
	if (temp_d < temp_s)
	{
		while (idx < len)
		{
			temp_d[idx] = temp_s[idx];
			idx++;
		}		
	}
	else if (temp_d > temp_s)
	{
		while (len)
		{
			temp_d[len - 1] = temp_s[len -1];
			len--;
		}
	}
	return (dst);
}
