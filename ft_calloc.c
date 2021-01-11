/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 04:06:18 by doyun             #+#    #+#             */
/*   Updated: 2021/01/09 04:06:18 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t *mem;

	mem = (size_t*)malloc(sizeof(size)*count);
	ft_bzero(mem, count);
	return (mem);
}