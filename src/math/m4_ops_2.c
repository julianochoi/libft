/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m4_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 00:05:13 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/30 11:43:03 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_m4		m4_mat_mult(t_m4 m1, t_m4 m2)
{
	t_m4 mat;

	mat.c1 = v4_mat_mult(m1, m2.c1);
	mat.c2 = v4_mat_mult(m1, m2.c2);
	mat.c3 = v4_mat_mult(m1, m2.c3);
	mat.c4 = v4_mat_mult(m1, m2.c4);
	return (mat);
}

double		m4_trace(t_m4 m)
{
	return (m.c1.x * m.c2.y * m.c3.z * m.c4.w);
}

double		m4_det(t_m4 m)
{
	t_v3	v1;
	t_v3	v2;
	t_v3	v3;
	t_v3	v4;
	double	det;

	det = 0;
	v1 = gen_v3(m.c1.y, m.c1.z, m.c1.w);
	v2 = gen_v3(m.c2.y, m.c2.z, m.c2.w);
	v3 = gen_v3(m.c3.y, m.c3.z, m.c3.w);
	v4 = gen_v3(m.c4.y, m.c4.z, m.c4.w);
	det += m.c1.x * m3_det(gen_m3(v2, v3, v4));
	det -= m.c2.x * m3_det(gen_m3(v1, v3, v4));
	det += m.c3.x * m3_det(gen_m3(v1, v2, v4));
	det -= m.c4.x * m3_det(gen_m3(v1, v2, v3));
	return (det);
}

static t_m3	m3_reduce_row(t_v4 vec1, t_v4 vec2, t_v4 vec3, int row)
{
	t_v3 c1;
	t_v3 c2;
	t_v3 c3;

	c1 = v4_reduce(vec1, row);
	c2 = v4_reduce(vec2, row);
	c3 = v4_reduce(vec3, row);
	return (gen_m3(c1, c2, c3));
}

t_m3		m4_submatrix(t_m4 m, int row, int column)
{
	t_m3 sub;

	if (column == 1)
		sub = m3_reduce_row(m.c2, m.c3, m.c4, row);
	if (column == 2)
		sub = m3_reduce_row(m.c1, m.c3, m.c4, row);
	if (column == 3)
		sub = m3_reduce_row(m.c1, m.c2, m.c4, row);
	if (column == 4)
		sub = m3_reduce_row(m.c1, m.c2, m.c3, row);
	return (sub);
}
