/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m2_ops_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:01:17 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/30 11:28:48 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_m2	m2_add(t_m2 m1, t_m2 m2)
{
	t_m2 mat;

	mat.c1 = v2_add(m1.c1, m2.c1);
	mat.c2 = v2_add(m1.c2, m2.c2);
	return (mat);
}

t_m2	m2_sub(t_m2 m1, t_m2 m2)
{
	t_m2 mat;

	mat.c1 = v2_sub(m1.c1, m2.c1);
	mat.c2 = v2_sub(m1.c2, m2.c2);
	return (mat);
}

t_m2	m2_transpose(t_m2 m)
{
	t_m2	m_transpose;

	m_transpose.c1 = gen_v2(m.c1.x, m.c2.x);
	m_transpose.c2 = gen_v2(m.c1.y, m.c2.y);
	return (m_transpose);
}

t_m2	m2_scalar(double scalar, t_m2 m)
{
	t_m2 mat;

	mat.c1 = v2_scalar(scalar, m.c1);
	mat.c2 = v2_scalar(scalar, m.c2);
	return (mat);
}

t_m2	m2_mat_mult(t_m2 m1, t_m2 m2)
{
	t_m2 mat;

	mat.c1 = v2_mat_mult(m1, m2.c1);
	mat.c2 = v2_mat_mult(m1, m2.c2);
	return (mat);
}
