/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 10:05:10 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 22:02:52 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_count_strings(const char *s, char c)
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

static void	split_fill_array(const char *s, char c, char **array, size_t count)
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

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;

	if (!s)
		return (NULL);
	count = split_count_strings(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	split_fill_array(s, c, array, count);
	array[count] = NULL;
	return (array);
}
