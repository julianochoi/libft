/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:56:22 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:31:31 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
# define VECTORS_H

typedef struct s_v2
{
	double	x;
	double	y;
}				t_v2;

typedef struct s_v3
{
	double	x;
	double	y;
	double	z;
}				t_v3;

typedef struct s_v4
{
	double	x;
	double	y;
	double	z;
	double	w;
}				t_v4;

t_v2			gen_v2(double x, double y);
t_v2			v2_add(t_v2 u, t_v2 v);
t_v2			v2_sub(t_v2 u, t_v2 v);
t_v2			v2_scalar(double scalar, t_v2 vec);
double			v2_dot(t_v2 u, t_v2 v);
double			v2_mag(t_v2 v);
t_v2			v2_norm(t_v2 v);

t_v3			gen_v3(double x, double y, double z);
bool			is_null_v3(t_v3 v);
bool			is_in_range_v3(t_v3 v, double min, double max);
t_v3			v3_add(t_v3 u, t_v3 v);
t_v3			v3_sub(t_v3 u, t_v3 v);
t_v3			v3_scalar(double scalar, t_v3 vec);
double			v3_dot(t_v3 u, t_v3 v);
t_v3			v3_cross(t_v3 u, t_v3 v);
double			v3_mag(t_v3 v);
t_v3			v3_norm(t_v3 v);

t_v4			gen_v4(double x, double y, double z, double w);
t_v4			v4_add(t_v4 u, t_v4 v);
t_v4			v4_sub(t_v4 u, t_v4 v);
t_v4			v4_scalar(double scalar, t_v4 vec);
double			v4_dot(t_v4 u, t_v4 v);
t_v4			v4_cross(t_v4 u, t_v4 v);
double			v4_mag(t_v4 v);
t_v4			v4_norm(t_v4 v);
t_v3			v4_reduce(t_v4 v, int row);
t_v4			v4_translate(t_v4 v, double x, double y, double z);
t_v4			v4_scale(t_v4 v, double x, double y, double z);

#endif
