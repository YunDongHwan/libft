/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:40:45 by doyun             #+#    #+#             */
/*   Updated: 2021/01/18 03:30:27 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
 {
    unsigned char *temp_d;
    unsigned char *temp_s;
	unsigned char temp_c;

    temp_d = (unsigned char *)dst;
    temp_s = (unsigned char *)src;
	temp_c = (unsigned char)c;
	if (dst == NULL && src == NULL)
		return (0);
    while (n)
    {
		*temp_d = *temp_s;
        if (*temp_s == temp_c)				
            return (temp_d++);		
        temp_d++;
        temp_s++;
        n--;
    }
    return (0);
 }
