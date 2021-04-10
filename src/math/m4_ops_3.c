/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m4_ops_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:43:14 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/30 18:20:47 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_m4		m4_inverse(t_m4 m)
{
	t_m4 inv;

	inv.c1.x = m3_det(m4_submatrix(m, 1, 1));
	inv.c1.y = (-1.0) * m3_det(m4_submatrix(m, 2, 1));
	inv.c1.z = m3_det(m4_submatrix(m, 3, 1));
	inv.c1.w = (-1.0) * m3_det(m4_submatrix(m, 4, 1));
	inv.c2.x = (-1.0) * m3_det(m4_submatrix(m, 1, 2));
	inv.c2.y = m3_det(m4_submatrix(m, 2, 2));
	inv.c2.z = (-1.0) * m3_det(m4_submatrix(m, 3, 2));
	inv.c2.w = m3_det(m4_submatrix(m, 4, 2));
	inv.c3.x = m3_det(m4_submatrix(m, 1, 3));
	inv.c3.y = (-1.0) * m3_det(m4_submatrix(m, 2, 3));
	inv.c3.z = m3_det(m4_submatrix(m, 3, 3));
	inv.c3.w = (-1.0) * m3_det(m4_submatrix(m, 4, 3));
	inv.c4.x = (-1.0) * m3_det(m4_submatrix(m, 1, 4));
	inv.c4.y = m3_det(m4_submatrix(m, 2, 4));
	inv.c4.z = (-1.0) * m3_det(m4_submatrix(m, 3, 4));
	inv.c4.w = m3_det(m4_submatrix(m, 4, 4));
	inv = m4_transpose(inv);
	return (m4_scalar((1.0 / m4_det(m)), inv));
}

t_m4		m4_translation(double x, double y, double z)
{
	t_m4 tr_mat;

	tr_mat = m4_id();
	tr_mat.c4 = gen_v4(x, y, z, 1.0);
	return (tr_mat);
}

t_m4		m4_scaling(double x, double y, double z)
{
	t_m4 scale_mat;

	scale_mat = m4_id();
	scale_mat.c1.x = x;
	scale_mat.c2.y = y;
	scale_mat.c3.z = z;
	return (scale_mat);
}

t_m4		m4_rotation(double radians, char axis)
{
	t_m4	rot_mat;
	double	sin_r;
	double	cos_r;

	sin_r = sin(radians);
	cos_r = cos(radians);
	rot_mat = m4_id();
	if (axis == 'x')
	{
		rot_mat.c2 = gen_v4(0, cos_r, sin_r, 0);
		rot_mat.c3 = gen_v4(0, -sin_r, cos_r, 0);
	}
	if (axis == 'y')
	{
		rot_mat.c1 = gen_v4(cos_r, 0, -sin_r, 0);
		rot_mat.c3 = gen_v4(sin_r, 0, cos_r, 0);
	}
	if (axis == 'z')
	{
		rot_mat.c1 = gen_v4(cos_r, sin_r, 0, 0);
		rot_mat.c2 = gen_v4(-sin_r, cos_r, 0, 0);
	}
	return (rot_mat);
}
