/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 23:09:32 by doyun             #+#    #+#             */
/*   Updated: 2021/01/27 03:16:47 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f(unsigned int i, char c)
{
	if (i % 2)
		c = 'j';
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char temp_s;
	int len;
	int idx;

	len = ft_strlen(s);
	if(!s && !f)
		return NULL;
	if (!(temp_s = (unsigned char)malloc(sizeof(char) * len + 1)))
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		temp_s[idx] = f(idx, s[idx]);
		idx++;
	}
	temp_s[idx] = '\0';
	return (temp_s);	
}
