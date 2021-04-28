/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 00:10:12 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 16:51:18 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	itoa_check_nbr_size(long num)
{
	size_t	size;

	size = 0;
	if (num < 0)
		size = 1;
	while (1)
	{
		num /= 10;
		size++;
		if (num == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(ssize_t n)
{
	ssize_t	num;
	char	*array;
	size_t	size;

	num = n;
	size = itoa_check_nbr_size(num);
	array = malloc(size + 1);
	if (!array)
		return (NULL);
	if (num < 0)
	{
		array[0] = '-';
		num *= -1;
	}
	array[size] = '\0';
	while (1)
	{
		array[size - 1] = (num % 10) + '0';
		num /= 10;
		size--;
		if (num == 0)
			break ;
	}
	return (array);
}
