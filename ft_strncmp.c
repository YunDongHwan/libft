/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 03:26:52 by doyun             #+#    #+#             */
/*   Updated: 2021/01/07 03:26:52 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t idx;

    idx = 0;
    while (n)
    {
        if (s1[idx] == s2[idx])
        {
            idx++;
        }
        else
            return (s1[idx] > s2[idx] ? 1 : -1);
        n--;
    }
    return (0);
}