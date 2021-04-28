/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 23:26:51 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/04/28 15:56:36 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	int_handler(t_flags *flags, va_list ap)
{
	ssize_t	num;
	char	*conversion;
	int		sign;

	sign = 1;
	flag_check_ints(flags);
	num = va_arg(ap, int);
	if (num < 0)
	{
		sign = -1;
		num *= -1;
	}
	if (!num && !flags->precision)
		conversion = ft_strdup("");
	else
		conversion = ft_itoa(num);
	if (count_digits(num) <= flags->precision || sign == -1)
		add_zeroes(flags, &conversion, sign);
	if ((int)ft_strlen(conversion) < flags->field_width)
		add_padding(flags, &conversion, sign);
	add_to_buffer(flags, &conversion);
}
