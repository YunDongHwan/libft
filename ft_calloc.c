/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 04:06:18 by doyun             #+#    #+#             */
/*   Updated: 2021/01/16 04:19:31 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t count, size_t size)
{
	char	*mem;

	if (!(mem = malloc(size * count)))	
		return (0);
	ft_bzero(mem, (size * count));
	return (mem);
}
