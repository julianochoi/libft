/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 01:12:15 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/31 15:55:55 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			max_int(int a, int b)
{
	return (a > b ? a : b);
}

int			min_int(int a, int b)
{
	return (a > b ? b : a);
}

double		max_double(double a, double b)
{
	return (a > b ? a : b);
}

double		min_double(double a, double b)
{
	return (a > b ? b : a);
}
