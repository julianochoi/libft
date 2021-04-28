/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m3_ops_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:36:42 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:41:58 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_m3	m3_add(t_m3 m1, t_m3 m2)
{
	t_m3	mat;

	mat.c1 = v3_add(m1.c1, m2.c1);
	mat.c2 = v3_add(m1.c2, m2.c2);
	mat.c3 = v3_add(m1.c3, m2.c3);
	return (mat);
}

t_m3	m3_sub(t_m3 m1, t_m3 m2)
{
	t_m3	mat;

	mat.c1 = v3_sub(m1.c1, m2.c1);
	mat.c2 = v3_sub(m1.c2, m2.c2);
	mat.c3 = v3_sub(m1.c3, m2.c3);
	return (mat);
}

t_m3	m3_transpose(t_m3 m)
{
	t_m3	m_transpose;

	m_transpose.c1 = gen_v3(m.c1.x, m.c2.x, m.c3.x);
	m_transpose.c2 = gen_v3(m.c1.y, m.c2.y, m.c3.y);
	m_transpose.c3 = gen_v3(m.c1.z, m.c2.z, m.c3.z);
	return (m_transpose);
}

t_m3	m3_scalar(double scalar, t_m3 m)
{
	t_m3	mat;

	mat.c1 = v3_scalar(scalar, m.c1);
	mat.c2 = v3_scalar(scalar, m.c2);
	mat.c3 = v3_scalar(scalar, m.c3);
	return (mat);
}

t_m3	m3_mat_mult(t_m3 m1, t_m3 m2)
{
	t_m3	mat;

	mat.c1 = v3_mat_mult(m1, m2.c1);
	mat.c2 = v3_mat_mult(m1, m2.c2);
	mat.c3 = v3_mat_mult(m1, m2.c3);
	return (mat);
}
