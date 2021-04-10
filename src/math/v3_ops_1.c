/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_utils_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:01:49 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/28 22:19:55 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v3	v3_add(t_v3 u, t_v3 v)
{
	t_v3 vec;

	vec.x = u.x + v.x;
	vec.y = u.y + v.y;
	vec.z = u.z + v.z;
	return (vec);
}

t_v3	v3_sub(t_v3 u, t_v3 v)
{
	t_v3 vec;

	vec.x = u.x - v.x;
	vec.y = u.y - v.y;
	vec.z = u.z - v.z;
	return (vec);
}

t_v3	v3_scalar(double scalar, t_v3 vec)
{
	vec.x *= scalar;
	vec.y *= scalar;
	vec.z *= scalar;
	return (vec);
}

double	v3_dot(t_v3 u, t_v3 v)
{
	return ((u.x * v.x) + (u.y * v.y) + (u.z * v.z));
}

t_v3	v3_cross(t_v3 u, t_v3 v)
{
	t_v3 vec;

	vec.x = (u.y * v.z) - (u.z * v.y);
	vec.y = (u.z * v.x) - (u.x * v.z);
	vec.z = (u.x * v.y) - (u.y * v.x);
	return (vec);
}
