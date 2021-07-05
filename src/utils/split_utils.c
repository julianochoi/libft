/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 00:15:39 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/06/09 00:20:05 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_split(char **array)
{
	size_t	i;

	if (!array || !*array)
		return ;
	i = 0;
	while (array[i])
	{
		ft_printf("%d: [%s]\t at [%p]\n", i, array[i], array[i]);
		i++;
	}
}

void	free_split(char **array)
{
	size_t	i;

	if (!array || !*array)
		return ;
	i = 0;
	while (array[i])
	{
		free_and_null((void **)(&array[i]));
		i++;
	}
	free_and_null((void **)&array);
}

char	*split_join(char **split)
{
	char	*aux;
	char	*temp;
	int		i;

	i = 0;
	temp = NULL;
	while (split[i])
	{
		if (!temp)
			temp = ft_strdup(split[i]);
		else
		{
			aux = ft_strjoin(temp, " ");
			free(temp);
			temp = ft_strjoin(aux, split[i]);
			free(aux);
		}
		i++;
	}
	return (temp);
}

char	*split_n_join(char **split, int n)
{
	char	*aux;
	char	*temp;
	int		i;

	i = 0;
	temp = NULL;
	while (split[i] && i < n)
	{
		if (!temp)
			temp = ft_strdup(split[i]);
		else
		{
			aux = ft_strjoin(temp, " ");
			free(temp);
			temp = ft_strjoin(aux, split[i]);
			free(aux);
		}
		i++;
	}
	return (temp);
}
