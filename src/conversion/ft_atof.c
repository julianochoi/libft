/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:50:27 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 16:46:42 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	decimal_val(char **s)
{
	double	dec;
	double	val;

	dec = 0.0;
	val = 0.1;
	(*s)++;
	while (**s && ft_isdigit(**s))
	{
		dec = dec + (**s - '0') * val;
		val /= 10;
		(*s)++;
	}
	return (dec);
}

double	ft_atof(const char *s, char **endptr)
{
	int		sign;
	double	num;
	char	*ptr;

	sign = 1;
	num = 0;
	ptr = (char *)s;
	while (*ptr && ft_isspace(*ptr))
		ptr++;
	if (*ptr && (*ptr == '+' || *ptr == '-'))
		if (*(ptr++) == '-')
			sign = -1;
	while (*ptr && ft_isdigit(*ptr))
		num = (num * 10) + (*(ptr++) - '0');
	if (*ptr == '.')
		num = num + decimal_val(&ptr);
	if (endptr)
		*endptr = ptr;
	if (num == 0.0)
		return (0.0);
	return (num * sign);
}
