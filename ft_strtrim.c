/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun </var/mail/doyun>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:12:26 by doyun             #+#    #+#             */
/*   Updated: 2021/01/21 05:02:58 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(unsigned char s1, unsigned char *set)
{
	if (s1 == *set)
		return (1);
	while (s1 != *set && *set)
	{
		set++;
		if (s1 == *set)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*temp_s1;
	size_t			check_f;
	size_t			check_l;
	size_t			len;

	if (!s1 || !set)
		return (0);
	check_f = 
	while (check((unsigned char)s1[check_f], (unsigned char *)set))
	{
		check_f++;		
	}
	check_l = ft_strlen(s1) - 1;
	while (check((unsigned char)s1[check_l], (unsigned char *)set))
	{
		check_l--;
	}
	if (check_f >= check_l)
		return (ft_strdup(""));
	len = check_l - check_f + 1;
	if (!(temp_s1 = (unsigned char *)ft_substr((char *)s1 , (unsigned int)check_f, len)))
			return (0);	
	return ((char *)temp_s1);
}
