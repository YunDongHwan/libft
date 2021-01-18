/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:32:10 by doyun             #+#    #+#             */
/*   Updated: 2021/01/18 13:49:57 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *temp_s;

	temp_s = (char *)s;
	if (!s && c != 0)
		return (0);
	while (*temp_s)
	{
		if (*temp_s == (char)c)
			return (char *)(temp_s);
		temp_s++;
	}
	if (*temp_s == (char)c)
		return (temp_s);
	return (0);
}
