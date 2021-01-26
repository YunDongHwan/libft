/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:51:47 by doyun             #+#    #+#             */
/*   Updated: 2021/01/26 23:08:38 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countChar(char *s, char c)
{
	int count;
	int	idx;

	count = 0;
	idx = 0;
	while(s[idx])
	{
		while (s[idx] == c)
			idx++;
		while (s[idx] != c && s[idx])
		{	
			idx++;		
			if (s[idx] == c || !(s[idx]))
				count++;	
		}
	}
	return (count);
}

static int		checkStart(char *s, char c, int start)
{	
	int	idx;
	
	idx = start;	
	while (s[idx] && s[idx] == c)
		idx++;
	if (s[idx] && s[idx] != c)
		return (idx);
	return (-1);
}

static int		checkEnd(char *s, char c)
{	
	int	idx;
	
	idx = 0;	
	while (s[idx] != c && s[idx])
		idx++;	
	return (idx);
}

static void		allocate(char **split_s, char *s, char c)
{
	int	idx;
	int	start;
	int	end;	

	idx = 0;
	start = 0;	
 	while (0 <= (start = checkStart(s, c, start)))
	{
		end = checkEnd(&s[start], c);
		if (!(split_s[idx] = ft_substr(s, start, end)))
		{			
			while (idx > 0)
			{		
				idx--;
				free(split_s[idx]);
				split_s[idx] = 0;			
			}
			free(split_s);
			split_s = 0;
			return ;
		}
		idx++;
		start = start + end;
	}
	split_s[idx] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**split_s;	
	int		low;

	if (!s)
		return (0);
	low = countChar((char *)s, c);
	if (!(split_s = (char**)malloc(sizeof(char *) * (low + 1))))
		return (0);	
	allocate(split_s, (char *)s, c);
	return (split_s); 
}