/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 02:12:10 by doyun             #+#    #+#             */
/*   Updated: 2020/12/30 02:12:10 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t idx;        
    
    idx = 0;
    if (src[idx] != NULL && dstsize > 0)
    {
        while (idx < dstsize - 1 && src[idx] != NULL)
        {
            dst[idx] = src[idx];
            idx++;      
        }
    }
    dst[idx] = NULL;
    while (src[idx])
        idx++;
    return (idx);
    
}       