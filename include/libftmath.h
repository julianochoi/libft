/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftmath.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:02:55 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/05/14 22:08:50 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTMATH_H
# define LIBFTMATH_H

# include <math.h>
# include <stdbool.h>
# include <stdint.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include "colors.h"
# include "vectors.h"
# include "matrices.h"
# include "rays.h"

# define EPSILON 0.00001

t_v2	v2_mat_mult(t_m2 m, t_v2 v);
t_v3	v3_mat_mult(t_m3 m, t_v3 v);
t_v4	v4_mat_mult(t_m4 m, t_v4 v);
bool	fp_is_equal(double a, double b);
int		ft_percent(int x, int y);
double	deg_to_rad(double deg);
double	rad_to_deg(double rad);
double	ft_min(double a, double b);
double	ft_max(double a, double b);
bool	is_in_range_double(double value, double min, double max);

#endif
