/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 22:44:59 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/03/31 14:34:40 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEOMETRY_H
# define GEOMETRY_H

# include "vectors.h"
# include "matrices.h"
# include "rays.h"

t_v2			v2_mat_mult(t_m2 m, t_v2 v);
t_v3			v3_mat_mult(t_m3 m, t_v3 v);
t_v4			v4_mat_mult(t_m4 m, t_v4 v);

#endif
