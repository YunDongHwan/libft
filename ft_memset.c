/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:58:31 by doyun             #+#    #+#             */
/*   Updated: 2020/12/28 16:58:31 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *temp_b;
	unsigned char temp_c;

	temp_b = b;
	temp_c = c;
	while(len)
	{
		*temp_b = temp_c;
		temp_b++;
		len--;
	}
	return (b);
}
