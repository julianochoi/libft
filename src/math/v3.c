/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:27:15 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/03 19:08:41 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v3	gen_v3(double x, double y, double z)
{
	t_v3 vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	return (vec);
}

bool	is_null_v3(t_v3 v)
{
	return (fp_is_equal(v.x, 0.0)
			&& fp_is_equal(v.y, 0.0)
			&& fp_is_equal(v.z, 0.0));
}

bool	is_in_range_v3(t_v3 v, double min, double max)
{
	return ((v.x >= min && v.x <= max)
			&& (v.y >= min && v.y <= max)
			&& (v.z >= min && v.z <= max));
}
