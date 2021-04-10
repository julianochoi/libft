/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:35:59 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/04 15:36:26 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

typedef struct	s_rgb
{
	double	r;
	double	g;
	double	b;
}				t_rgb;

t_rgb			gen_color(double r, double g, double b);
t_rgb			color_add(t_rgb c1, t_rgb c2);
t_rgb			color_mult(t_rgb c1, t_rgb c2);
t_rgb			color_scalar(double scalar, t_rgb c);
t_rgb			rescale_color(t_rgb color, double min, double max);

#endif
