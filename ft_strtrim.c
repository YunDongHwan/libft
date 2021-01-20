/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun </var/mail/doyun>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:12:26 by doyun             #+#    #+#             */
/*   Updated: 2021/01/20 22:56:13 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	checkFirst(unsigned char *s1, unsigned char *set)
{
	size_t	idx;

	idx = 0;
	while (s1[idx] == *set)
		idx++;
	return (idx);	
}

static size_t	checkLast(unsigned char *s1, unsigned char *set)
{
	size_t	idx;

	idx = ft_strlen(s1) - 1;
	while (s1[idx] == *set)
		idx++;
	return (idx);	
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*temp_s1;
	size_t			check_f;
	size_t			check_l;

	check_f = checkFirst((unsigned char *)s1, (unsigned char *)set);
	check_l = checkLast((unsigned char *)s1, (unsigned char *)set);
	if (!(temp_s1 = (unsigned char *)malloc(sizeof(char) * (check_l - check_f + 2))))
		return (0); 
	while (check_f < check_l + 1)
	{
		*temp_s1++ = s1[check_f++];
	}
	*temp_s1 = '\0';
	return ((char *)temp_s1 - check_l - check_f + 1);
}
