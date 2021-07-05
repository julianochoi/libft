/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 10:05:10 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/06/09 00:21:59 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	split_count_strings(char *s, char c)
{
	size_t	idx;
	size_t	count;
	size_t	len;

	idx = 0;
	count = 0;
	len = 0;
	while (s[idx])
	{
		if (s[idx] == c)
		{
			if (len != 0)
				count++;
			len = 0;
		}
		else
			len++;
		idx++;
	}
	if (len != 0)
		return (count + 1);
	return (count);
}

static void	split_fill_array(char **array, char *s, char c, size_t count)
{
	char	*str;
	size_t	array_idx;
	size_t	idx;
	size_t	len;

	array_idx = 0;
	idx = 0;
	len = 0;
	while (array_idx < count)
	{
		if (s[idx] == c || s[idx] == '\0')
		{
			if (len != 0)
			{
				str = ft_calloc(len + 1, sizeof(char));
				ft_memcpy(str, s + idx - len, len);
				array[array_idx++] = str;
			}
			len = 0;
		}
		else
			len++;
		idx++;
	}
}

/*
*	s: string to be split by separator 'c'.
*	count_function(char *s, char 'c'): 
*		Returns number of strings separated by 'c', according to its criteria.
*
*	split_filler(char **array, char *s, char c, size_t count):
*		Fills malloc'd array with 'count' strings separated by 'c'.
*
*	Usage:	ft_split(s, c, NULL, NULL) for the original behavior.
*/
char	**ft_split(char *s, char c, size_t (count_function)(char *, char),
			void (split_filler)(char **, char *, char, size_t))
{
	size_t	count;
	char	**array;

	if (!s)
		return (NULL);
	if (!count_function)
		count_function = split_count_strings;
	count = (count_function)(s, c);
	if (!count)
		return (NULL);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (!split_filler)
		split_filler = split_fill_array;
	(split_filler)(array, s, c, count);
	array[count] = NULL;
	return (array);
}
