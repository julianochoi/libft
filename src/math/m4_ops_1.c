/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m4_ops_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:25:50 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:39:54 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_m4	m4_add(t_m4 m1, t_m4 m2)
{
	t_m4	mat;

	mat.c1 = v4_add(m1.c1, m2.c1);
	mat.c2 = v4_add(m1.c2, m2.c2);
	mat.c3 = v4_add(m1.c3, m2.c3);
	mat.c4 = v4_add(m1.c4, m2.c4);
	return (mat);
}

t_m4	m4_sub(t_m4 m1, t_m4 m2)
{
	t_m4	mat;

	mat.c1 = v4_sub(m1.c1, m2.c1);
	mat.c2 = v4_sub(m1.c2, m2.c2);
	mat.c3 = v4_sub(m1.c3, m2.c3);
	mat.c4 = v4_sub(m1.c4, m2.c4);
	return (mat);
}

t_m4	m4_transpose(t_m4 m)
{
	t_m4	m_transpose;

	m_transpose.c1 = gen_v4(m.c1.x, m.c2.x, m.c3.x, m.c4.x);
	m_transpose.c2 = gen_v4(m.c1.y, m.c2.y, m.c3.y, m.c4.y);
	m_transpose.c3 = gen_v4(m.c1.z, m.c2.z, m.c3.z, m.c4.z);
	m_transpose.c4 = gen_v4(m.c1.w, m.c2.w, m.c3.w, m.c4.w);
	return (m_transpose);
}

t_m4	m4_scalar(double scalar, t_m4 m)
{
	t_m4	mat;

	mat.c1 = v4_scalar(scalar, m.c1);
	mat.c2 = v4_scalar(scalar, m.c2);
	mat.c3 = v4_scalar(scalar, m.c3);
	mat.c4 = v4_scalar(scalar, m.c4);
	return (mat);
}

t_m4	m4_id(void)
{
	t_v4	c1;
	t_v4	c2;
	t_v4	c3;
	t_v4	c4;

	c1 = gen_v4(1, 0, 0, 0);
	c2 = gen_v4(0, 1, 0, 0);
	c3 = gen_v4(0, 0, 1, 0);
	c4 = gen_v4(0, 0, 0, 1);
	return (gen_m4(c1, c2, c3, c4));
}
