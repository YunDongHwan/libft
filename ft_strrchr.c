/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 22:31:16 by doyun             #+#    #+#             */
/*   Updated: 2021/01/05 22:31:16 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strrchr(const char *s, int c)
{
    const unsigned char *pnt_s;
    unsigned char temp_c;

    pnt_s = s;
    temp_c = c;
    while (s)
    {
        if (*s == temp_c)
            pnt_s = s;
        s++;
    }
    if (pnt_s != s)
        return (0);
    return (pnt_s);
}