/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 00:58:00 by doyun             #+#    #+#             */
/*   Updated: 2021/01/25 04:37:38 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		intlen(long long int n)   
{
	long long int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{  
		n /= 10;
		len++;
	}
	// printf("len : %lld \n", len);
	return (len);
}

char	*ft_itoa(int n)				//-1234
{
	char	*num;
	int		len;
		
	len = intlen(n);
	if(!(num = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	num[len] = '\0';
	if (!n)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		if (n == -2147483648)
		{			
			num[--len] = '8';			
			n = -214748364;
		}
		n *= -1;		
	}
	while (n)
	{
		num[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;		
	}	
	return (num);
}