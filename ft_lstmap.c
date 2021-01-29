/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyun <doyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 03:33:20 by doyun             #+#    #+#             */
/*   Updated: 2021/01/30 03:33:20 by doyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *f_lst;

	if (!(f_lst = mallic(sizeof(t_list) * ft_lstsize(lst) + 1)))
		return (NULL);
	if (!lst)
		return (NULL);
	while (lst)
	{
		f_lst->content = lst->content;
		f_lst->next = lst->next;
		ft_lstiter(f_lst, f);
		lst = lst->next;
		f_lst = f_lst->next;
	}
	f_lst = NULL;
	return (f_lst);
}
