/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:53:56 by doyun             #+#    #+#             */
/*   Updated: 2020/12/28 21:53:56 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *temp_s;

	temp_s = (const unsigned char*)s;
	while (n)
	{
		if (*temp_s == c)
			return ((void*)temp_s);
		temp_s++;
		n--;
	}
	return (0);
}
