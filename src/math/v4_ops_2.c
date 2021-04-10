/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:48:46 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/30 12:13:14 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v4	v4_norm(t_v4 v)
{
	return (v4_scalar((1 / v4_mag(v)), v));
}

t_v4	v4_mat_mult(t_m4 m, t_v4 v)
{
	t_m4	m_transpose;
	t_v4	vec;

	m_transpose = m4_transpose(m);
	vec.x = v4_dot(m_transpose.c1, v);
	vec.y = v4_dot(m_transpose.c2, v);
	vec.z = v4_dot(m_transpose.c3, v);
	vec.w = v4_dot(m_transpose.c4, v);
	return (vec);
}

t_v3	v4_reduce(t_v4 v, int row)
{
	if (row == 1)
		return (gen_v3(v.y, v.z, v.w));
	else if (row == 2)
		return (gen_v3(v.x, v.z, v.w));
	else if (row == 3)
		return (gen_v3(v.x, v.y, v.w));
	else if (row == 4)
		return (gen_v3(v.x, v.y, v.z));
	else
		return (gen_v3(0, 0, 0));
}

t_v4	v4_translate(t_v4 v, double x, double y, double z)
{
	t_v4 tr_vec;

	tr_vec = v4_mat_mult((m4_translation(x, y, z)), v);
	return (tr_vec);
}

t_v4	v4_scale(t_v4 v, double x, double y, double z)
{
	t_v4 tr_vec;

	tr_vec = v4_mat_mult((m4_scaling(x, y, z)), v);
	return (tr_vec);
}
