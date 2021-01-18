/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:53:56 by doyun             #+#    #+#             */
/*   Updated: 2021/01/18 03:53:29 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp_s;

	temp_s = (unsigned char*)s;
	while (n)
	{
		if (*temp_s == (unsigned char)c)
			return ((void*)temp_s);
		temp_s++;
		n--;
	}
	return (0);
}
