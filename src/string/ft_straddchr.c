/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 23:23:19 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/06/24 18:37:29 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Allocates a new copy of 's' with added char 'c' to the index i.
*	If flag 'free_flag' is true, frees '*s', replaces *s with new string.
*	Null-terminated.
*	Returns allocated string if successful, NULL if not or if 'free_flag'.
*/
char	*ft_straddchr(char **s, char c, size_t i, bool free_flag)
{
	char	*temp;
	size_t	len;

	if (!c || i > ft_strlen(*s))
		return (NULL);
	len = ft_strlen(*s);
	temp = ft_calloc(len + 2, sizeof(char));
	if (!temp)
		return (NULL);
	ft_memcpy(temp, *s, i);
	temp[i] = c;
	ft_memcpy(temp + i + 1, *s + i, len - i);
	if (free_flag)
	{
		free(*s);
		*s = temp;
		return (NULL);
	}
	return (temp);
}
