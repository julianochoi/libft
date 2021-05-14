/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:48:05 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:35:43 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_v4	gen_v4(double x, double y, double z, double w)
{
	t_v4	vec;

	vec.x = x;
	vec.y = y;
	vec.z = z;
	vec.w = w;
	return (vec);
}
