/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:51:13 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/05 18:38:15 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftmath.h"

t_rgb	gen_color(double r, double g, double b)
{
	t_rgb color_tuple;

	color_tuple.r = r;
	color_tuple.g = g;
	color_tuple.b = b;
	return (color_tuple);
}

t_rgb	color_add(t_rgb c1, t_rgb c2)
{
	return (gen_color((c1.r + c2.r), (c1.g + c2.g), (c1.b + c2.b)));
}

t_rgb	color_mult(t_rgb c1, t_rgb c2)
{
	return (gen_color((c1.r * c2.r), (c1.g * c2.g), (c1.b * c2.b)));
}

t_rgb	color_scalar(double scalar, t_rgb c)
{
	t_rgb color;

	color.r = c.r * scalar;
	color.g = c.g * scalar;
	color.b = c.b * scalar;
	return (color);
}

t_rgb	rescale_color(t_rgb color, double min, double max)
{
	t_rgb	new_color;

	new_color.r = ft_max(min, ft_min(max, color.r));
	new_color.g = ft_max(min, ft_min(max, color.g));
	new_color.b = ft_max(min, ft_min(max, color.b));
	return (new_color);
}
