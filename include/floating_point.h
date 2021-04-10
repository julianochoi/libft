/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floating_point.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:35:57 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/05 18:36:53 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOATING_POINT_H
# define FLOATING_POINT_H

bool	fp_is_equal(double a, double b);
int		ft_percent(int x, int y);
double	deg_to_rad(double deg);
double	rad_to_deg(double rad);
double	ft_min(double a, double b);
double	ft_max(double a, double b);
bool	is_in_range_double(double value, double min, double max);

#endif
