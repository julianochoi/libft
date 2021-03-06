/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:18:29 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 16:47:39 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	return ((c == ' ')
		|| (c == '\f')
		|| (c == '\n')
		|| (c == '\r')
		|| (c == '\t')
		|| (c == '\v'));
}
