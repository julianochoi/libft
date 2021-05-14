/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_ops_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:41:16 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 21:55:00 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v2	v2_add(t_v2 u, t_v2 v)
{
	t_v2	vec;

	vec.x = u.x + v.x;
	vec.y = u.y + v.y;
	return (vec);
}

t_v2	v2_sub(t_v2 u, t_v2 v)
{
	t_v2	vec;

	vec.x = u.x - v.x;
	vec.y = u.y - v.y;
	return (vec);
}

t_v2	v2_scalar(double scalar, t_v2 vec)
{
	vec.x *= scalar;
	vec.y *= scalar;
	return (vec);
}

double	v2_dot(t_v2 u, t_v2 v)
{
	return ((u.x * v.x) + (u.y * v.y));
}

double	v2_mag(t_v2 v)
{
	return (sqrt(v2_dot(v, v)));
}
