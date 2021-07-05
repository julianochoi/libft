/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:39:10 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/06/18 17:12:12 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrm(t_list *previous, t_list *current, void (*del)(void *))
{
	t_list	*temp;

	if (previous)
		previous->next = current->next;
	temp = current->next;
	ft_lstdelone(current, del);
	return (temp);
}
