/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:41:07 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/04 12:43:55 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYS_H
# define RAYS_H

typedef struct	s_ray
{
	t_v3		o;
	t_v3		d;
	double		t_nearest;
	t_rgb		color;
	t_v3		hit_p;
	t_v3		n;
}				t_ray;

t_ray			gen_ray(t_v3 o, t_v3 d, double p_tnear);
t_v3			ray_position(t_ray ray, double t);
t_ray			ray_translation(t_ray ray, t_v3 vec);
t_ray			ray_scaling(t_ray ray, double scale);

#endif
