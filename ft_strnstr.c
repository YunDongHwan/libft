/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 16:02:42 by doyun             #+#    #+#             */
/*   Updated: 2021/01/06 16:02:42 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *strstr(const char *haystack, const char *needle)
{
    size_t idx;

    idx = 0;
    while (haystack[idx] == needle[idx])
    {
        idx++;
    }

}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    const unsigned char *temp_hst;
    const unsigned char *temp_ndl;
    size_t hst_idx;
    size_t ndl_idx;
    size_t ndl_len;

    temp_hst = haystack;
    temp_ndl = needle;
    hst_idx = 0;
    ndl_idx = 0;
    ndl_len = strlen(needle);
    if (*needle == '\0')
        return (haystack);
    while (hst_idx < len) 
    {    
        if (len - hst_idx + 1 < ndl_len)
            return (0);
        if (temp_hst[hst_idx] == temp_ndl[ndl_idx])
        {
            ndl_idx++;          
        }
        else if (temp_hst[hst_idx] != temp_ndl[ndl_idx])
        {
            ndl_idx = 0;
            hst_idx--;
        }
        hst_idx++;
    }
     return (temp_hst[hst_idx - ndl_idx]);
}         