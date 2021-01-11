/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:30:52 by doyun             #+#    #+#             */
/*   Updated: 2020/12/27 23:30:52 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *temp_d;
    const char *temp_s;

    temp_d = dst;
    temp_s = src;

    while(n)
    {
        *temp_d = *temp_s;
        temp_d++;
        temp_s++;
        n--;
    }
    return (dst);
}