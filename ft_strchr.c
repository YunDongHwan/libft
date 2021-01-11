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

#include <libft.h>

char    *ft_strchr(const char *s, int c)
{  
    unsigned char temp_c;
      
    temp_c = c;
    while (*s)
    {
        if (*s == temp_c)
            return (s);
        s++;
    }    
    return (0);
}