/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isquote.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 21:20:47 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/06/20 11:54:07 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_quote(int c)
{
	return (ft_is_squote(c) || ft_is_dquote(c));
}

int	ft_is_squote(int c)
{
	return (c == '\'');
}

int	ft_is_dquote(int c)
{
	return (c == '"');
}
