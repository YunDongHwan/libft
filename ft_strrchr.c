/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:31:16 by doyun             #+#    #+#             */
/*   Updated: 2021/01/05 22:31:16 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char *pnt_s;

	pnt_s = (const unsigned char*)s;
	while (s)
	{
		if (*s == c)
			pnt_s = (const unsigned char*)s;
		s++;
	}
	if (pnt_s != (const unsigned char*)s)
		return (0);
	return ((char*)pnt_s);
}
