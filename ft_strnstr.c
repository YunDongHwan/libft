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

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char *temp_hst;
	unsigned char *temp_ndl;
	size_t hst_idx;
	size_t ndl_idx;

	temp_hst = (unsigned char*)haystack;
	temp_ndl = (unsigned char*)needle;
	hst_idx = 0;
	ndl_idx = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (temp_hst[hst_idx] != '\0' && hst_idx < len)
	{
		if (temp_hst[hst_idx] == temp_ndl[ndl_idx])
		{
			ndl_idx++;
			if (temp_ndl[ndl_idx] == '\0')
			{
				hst_idx++;
				return ((char*)(temp_hst + (hst_idx - ndl_idx)));
			}
		}
		else if (temp_hst[hst_idx] != temp_ndl[ndl_idx])
		{
			ndl_idx = 0;
			hst_idx--;
		}
		hst_idx++;
	}
	return (0);
}
