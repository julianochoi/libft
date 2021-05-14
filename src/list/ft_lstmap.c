/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:21:12 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 16:54:11 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current_new;
	t_list	*current_old;

	if (!(lst))
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (!new_list)
		return (NULL);
	current_new = new_list;
	current_old = lst->next;
	while (1)
	{
		if (current_old == NULL)
			break ;
		current_new->next = ft_lstnew((*f)(current_old->content));
		if (!current_new->next)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		current_new = current_new->next;
		current_old = current_old->next;
	}
	return (new_list);
}
