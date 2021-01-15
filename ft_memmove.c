/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 18:54:46 by doyun             #+#    #+#             */
/*   Updated: 2020/12/28 18:54:46 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *temp_d;
	const unsigned char *temp_s;

	temp_d = dst;
	temp_s = src;
	if (temp_d <= temp_s)
	{
		while (len && temp_s)
		{
			*temp_d = *temp_s;
			temp_d++;
			temp_s++;
			len--;
		}
	}
	else
	{
		temp_d += len;
		temp_s += len;
		while (len && temp_d)
		{
			*temp_d = *temp_s;
			temp_d--;
			temp_s--;
			len--;
		}
	}
	return (dst);
}
