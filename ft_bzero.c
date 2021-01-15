/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:07:03 by doyun             #+#    #+#             */
/*   Updated: 2020/12/27 20:07:03 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char *temp;
	unsigned char temp_n;

	temp_n = n;
	temp = (unsigned char*)s;
	if (n < 1)
		return ((void)0);
	while(temp_n)
	{
		*temp = 0;
		temp++;
		temp_n--;
	}
	return ((void)temp);
}
