/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m3_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:36:42 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/03 02:23:49 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

double	m3_det(t_m3 m)
{
	return (v3_dot(m.c1, v3_cross(m.c2, m.c3)));
}

t_m3	m3_inverse(t_m3 m)
{
	t_m3 inv;

	inv.c1 = v3_cross(m.c2, m.c3);
	inv.c2 = v3_cross(m.c3, m.c1);
	inv.c3 = v3_cross(m.c1, m.c2);
	return (m3_scalar((1.0 / m3_det(m)), m3_transpose(inv)));
}

t_m3	m3_id(void)
{
	t_v3 c1;
	t_v3 c2;
	t_v3 c3;

	c1 = gen_v3(1, 0, 0);
	c2 = gen_v3(0, 1, 0);
	c3 = gen_v3(0, 0, 1);
	return (gen_m3(c1, c2, c3));
}
