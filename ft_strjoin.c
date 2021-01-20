/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun </var/mail/doyun>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:32:27 by doyun             #+#    #+#             */
/*   Updated: 2021/01/20 20:35:04 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*str_j;
	int 			len;
	int 			idx;
	int				len_s1;
	int				len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len = len_s1 + len_s2;
	if (!(str_j = (unsigned char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	idx = 0;
	while (idx < len)	
	{
		if (idx < len_s1)
			str_j[idx++] = *s1++;
		else
			str_j[idx++] = *s2++;
	}
	str_j[idx] = '\0';
	return ((char *)str_j);
}
