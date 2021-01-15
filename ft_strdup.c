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

#include "libft.h"
#include <errno.h>

char	*strdup(const char *s1)
{
	unsigned char *temp_s1;
	int len;

	len = strlen(s1) + 1;
	temp_s1 = (unsigned char*)malloc(sizeof(char)*len);
	if (*temp_s1 == '\0')
		return (0);
	//strcpy(temp_s1, s1);
	return ((char*)temp_s1);
}
