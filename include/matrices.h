/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrices.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 22:23:58 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 04:33:03 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICES_H
# define MATRICES_H

# include "vectors.h"

typedef struct s_m2
{
	t_v2	c1;
	t_v2	c2;
}				t_m2;

typedef struct s_m3
{
	t_v3	c1;
	t_v3	c2;
	t_v3	c3;
}				t_m3;

typedef struct s_m4
{
	t_v4	c1;
	t_v4	c2;
	t_v4	c3;
	t_v4	c4;
}				t_m4;

t_m2			gen_m2(t_v2 a, t_v2 b);
t_m2			m2_add(t_m2 m1, t_m2 m2);
t_m2			m2_sub(t_m2 m1, t_m2 m2);
t_m2			m2_transpose(t_m2 m);
t_m2			m2_scalar(double scalar, t_m2 m);
t_m2			m2_mat_mult(t_m2 m1, t_m2 m2);
double			m2_trace(t_m2 m);
double			m2_det(t_m2 m);
t_m2			m2_inverse(t_m2 m);

t_m3			gen_m3(t_v3 a, t_v3 b, t_v3 c);
t_m3			m3_add(t_m3 m1, t_m3 m2);
t_m3			m3_sub(t_m3 m1, t_m3 m2);
t_m3			m3_scalar(double scalar, t_m3 m);
t_m3			m3_transpose(t_m3 m);
t_m3			m3_mat_mult(t_m3 m1, t_m3 m2);
t_m3			m3_id(void);
double			m3_det(t_m3 m);
t_m3			m3_inverse(t_m3 m);

t_m4			gen_m4(t_v4 a, t_v4 b, t_v4 c, t_v4 d);
t_m4			m4_add(t_m4 m1, t_m4 m2);
t_m4			m4_sub(t_m4 m1, t_m4 m2);
t_m4			m4_transpose(t_m4 m);
t_m4			m4_scalar(double scalar, t_m4 m);
t_m4			m4_id(void);
t_m4			m4_mat_mult(t_m4 m1, t_m4 m2);
double			m4_trace(t_m4 m);
double			m4_det(t_m4 m);
t_m4			m4_inverse(t_m4 m);
t_m3			m4_submatrix(t_m4 m, int row, int column);
t_m4			m4_translation(double x, double y, double z);
t_m4			m4_scaling(double x, double y, double z);
t_m4			m4_rotation(double radians, char axis);

#endif
