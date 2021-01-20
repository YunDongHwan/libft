/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun </var/mail/doyun>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 22:36:24 by doyun             #+#    #+#             */
/*   Updated: 2021/01/20 01:59:49 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char *dest;
	unsigned char *src;
	unsigned int count;

	src = (unsigned char *)s;
	count = len - start;
	dest = (unsigned char *)malloc(sizeof(char) * (count + 1));
	if (!dest || !s )
		return (0);
	while (start < len && src[start])
	{
		*dest++ = src[start++];
	}
	*dest = '\0';
	return ((char *)(dest - count));
}
