/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 22:56:27 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/06/20 00:13:06 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Removes the character at the i-th index of the 's' string.
*
*	free_flag == true: string 's' is allocated with result and returns NULL.
*
*	free_flag == false: returns a new memory allocated string with the character
*	removed
*/
char	*ft_strrmchr(char **s, size_t i, bool free_flag)
{
	char	*str;

	if (!s || !(*s) || ft_strlen(*s) < i)
		return (NULL);
	str = ft_calloc(ft_strlen(*s), sizeof(char));
	ft_memcpy(str, *s, i);
	ft_memcpy(str + i, *s + i + 1, ft_strlen(*s) - i);
	if (free_flag)
	{
		free(*s);
		*s = str;
		return (NULL);
	}
	return (str);
}
