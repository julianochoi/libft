/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:01:49 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/29 00:02:44 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

double	v3_mag(t_v3 v)
{
	return (sqrt(v3_dot(v, v)));
}

t_v3	v3_norm(t_v3 v)
{
	return (v3_scalar((1 / v3_mag(v)), v));
}

t_v3	v3_mat_mult(t_m3 m, t_v3 v)
{
	t_m3	m_transpose;
	t_v3	vec;

	m_transpose = m3_transpose(m);
	vec.x = v3_dot(m_transpose.c1, v);
	vec.y = v3_dot(m_transpose.c2, v);
	vec.z = v3_dot(m_transpose.c3, v);
	return (vec);
}
