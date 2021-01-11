/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:40:45 by doyun             #+#    #+#             */
/*   Updated: 2020/12/27 23:40:45 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
 {
    char *temp_d;
    const char *temp_s;
    unsigned char temp_c;

    temp_d = dst;
    temp_s = src;
    while (n)
    {
        if (temp_s == c)
            return (temp_d++);
        *temp_d = *temp_s;
        temp_d++;
        temp_s++;
        n--;
    }
    return (0);
 }