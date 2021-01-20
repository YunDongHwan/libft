/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:40:45 by doyun             #+#    #+#             */
/*   Updated: 2021/01/20 23:59:37 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
 {
    unsigned char *temp_d;
    unsigned char *temp_s;
	unsigned char temp_c;
	unsigned int	idx;

    temp_d = (unsigned char *)dst;
    temp_s = (unsigned char *)src;
	temp_c = (unsigned char)c;
	idx = 0;
	if (dst == NULL && src == NULL)
		return (0);
    while (idx < n)
    {
		temp_d[idx] = temp_s[idx];
        if (temp_s[idx] == temp_c)
            return (temp_d + (idx + 1));		
        idx++;        
    }
    return (0);
 }
