/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:21:11 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 16:56:48 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = ft_memset(s, c, n);
	ptr[n] = '\0';
	return (ptr);
}
