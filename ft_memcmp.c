/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 01:48:54 by doyun             #+#    #+#             */
/*   Updated: 2021/01/18 03:51:45 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void * str1, const void * str2, size_t n)
{
	const unsigned char *temp_s1;
	const unsigned char *temp_s2;

	temp_s1 = (unsigned char *)str1;
	temp_s2 = (unsigned char *)str2;
	if (!str1 && !str2)
		return (0);
	while (n)
	{
		if (*temp_s1 == *temp_s2)
		{
			temp_s1++;
			temp_s2++;
		}
		else
			return (*temp_s1 - *temp_s2);
		n--;
	}
	return (0);
}
