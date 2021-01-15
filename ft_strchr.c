/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 02:32:10 by doyun             #+#    #+#             */
/*   Updated: 2021/01/05 02:32:10 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *temp_s;
	unsigned char temp_c;

	temp_s = s;
	temp_c = c;
	while (*temp_s)
	{
		if (*temp_s == temp_c)
			return (char*)(temp_s);
		temp_s++;
	}
	return (0);
}
