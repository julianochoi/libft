/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 01:12:15 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 17:06:23 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	max_int(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	min_int(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

double	max_double(double a, double b)
{
	if (a > b)
		return (a);
	return (b);
}

double	min_double(double a, double b)
{
	if (a < b)
		return (a);
	return (b);
}
