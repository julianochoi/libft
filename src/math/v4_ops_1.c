/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4_ops_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:48:46 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/29 22:53:55 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v4	v4_add(t_v4 u, t_v4 v)
{
	t_v4 vec;

	vec.x = u.x + v.x;
	vec.y = u.y + v.y;
	vec.z = u.z + v.z;
	vec.w = u.w + v.w;
	return (vec);
}

t_v4	v4_sub(t_v4 u, t_v4 v)
{
	t_v4 vec;

	vec.x = u.x - v.x;
	vec.y = u.y - v.y;
	vec.z = u.z - v.z;
	vec.w = u.w - v.w;
	return (vec);
}

t_v4	v4_scalar(double scalar, t_v4 vec)
{
	vec.x *= scalar;
	vec.y *= scalar;
	vec.z *= scalar;
	vec.w *= scalar;
	return (vec);
}

double	v4_dot(t_v4 u, t_v4 v)
{
	return ((u.x * v.x) + (u.y * v.y) + (u.z * v.z) + (u.w * v.w));
}

double	v4_mag(t_v4 v)
{
	return (sqrt(v4_dot(v, v)));
}
