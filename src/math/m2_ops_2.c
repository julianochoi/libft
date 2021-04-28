/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m2_ops_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:23:09 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:42:37 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

double	m2_trace(t_m2 m)
{
	return (m.c1.x * m.c2.y);
}

double	m2_det(t_m2 m)
{
	return ((m.c1.x * m.c2.y) - (m.c2.x * m.c1.y));
}

t_m2	m2_inverse(t_m2 m)
{
	t_m2	inv;

	inv = gen_m2(gen_v2(m.c2.y, (-1 * m.c1.y)), gen_v2((-1 * m.c2.x), m.c1.x));
	return (m2_scalar((1.0 / m2_det(m)), inv));
}
