/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:43:24 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:43:11 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_ray	gen_ray(t_v3 o, t_v3 d, double t_near)
{
	t_ray	ray;

	ray.o = o;
	ray.d = d;
	ray.t_nearest = t_near;
	ray.color = gen_color(0.0, 0.0, 0.0);
	ray.hit_p = gen_v3(0.0, 0.0, 0.0);
	ray.n = gen_v3(0.0, 0.0, 0.0);
	return (ray);
}

t_v3	ray_position(t_ray ray, double t)
{
	return (v3_add(ray.o, v3_scalar(t, ray.d)));
}

t_ray	ray_translation(t_ray ray, t_v3 vec)
{
	t_ray	tr_ray;

	tr_ray.o = v3_add(ray.o, vec);
	tr_ray.d = ray.d;
	return (tr_ray);
}

t_ray	ray_scaling(t_ray ray, double scale)
{
	t_ray	tr_ray;

	tr_ray.o = v3_scalar(scale, ray.o);
	tr_ray.d = v3_scalar(scale, ray.d);
	return (tr_ray);
}
