/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m4.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 23:21:35 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/29 23:22:06 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_m4	gen_m4(t_v4 a, t_v4 b, t_v4 c, t_v4 d)
{
	t_m4	mat;

	mat.c1 = a;
	mat.c2 = b;
	mat.c3 = c;
	mat.c4 = d;
	return (mat);
}
