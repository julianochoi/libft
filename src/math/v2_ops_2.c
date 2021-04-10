/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:45:53 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/29 22:46:17 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v2			v2_norm(t_v2 v)
{
	return (v2_scalar((1 / v2_mag(v)), v));
}

t_v2			v2_mat_mult(t_m2 m, t_v2 v)
{
	t_m2	m_transpose;
	t_v2	vec;

	m_transpose = m2_transpose(m);
	vec.x = v2_dot(m_transpose.c1, v);
	vec.y = v2_dot(m_transpose.c2, v);
	return (vec);
}
