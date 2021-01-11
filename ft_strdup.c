/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 02:53:55 by doyun             #+#    #+#             */
/*   Updated: 2021/01/10 02:53:55 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <errno.h>

char	*strdup(const char *s1)
{
	char *temp_s1;
	char *cp_s1;
	int len;

	len = 0;
	while (s1[len])
		len++;
	temp_s1 = (char*)malloc(sizeof(char)*len + 1);
	if (temp_s1 == NULL)
	{
		errno = ENOMEM;
		return (0);
	}
	cp_s1 = temp_s1;
	while (*s1)
		*temp_s1++ = *s1++;
	*temp_s1 = '\0';
	return (cp_s1);
}