/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_utils_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 00:48:08 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/05 18:38:04 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

bool	fp_is_equal(double a, double b)
{
	return (fabs(a - b) <= EPSILON);
}

double	deg_to_rad(double deg)
{
	return (deg * M_PI / 180.);
}

double	rad_to_deg(double rad)
{
	return (rad * 180. / M_PI);
}

double	ft_min(double a, double b)
{
	if (a > b)
		return (b);
	return (a);
}

double	ft_max(double a, double b)
{
	if (a > b)
		return (a);
	return (b);
}
