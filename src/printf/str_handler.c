/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 23:26:51 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/05/25 21:35:56 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_check_char(t_flags *flags)
{
	if (flags->zero && !flags->minus)
		flags->padding = '0';
	else
		flags->padding = 32;
	if (flags->dot && !flags->precision_read)
		flags->precision = 0;
}

static void	chr_zero_handler(t_flags *flags, char **conversion)
{
	int	n;

	flags->return_value += ft_strlen(flags->buffer);
	write(flags->fd, flags->buffer, ft_strlen(flags->buffer));
	free_and_null((void **)&flags->buffer);
	free_and_null((void **)conversion);
	flags->buffer = ft_strdup("");
	n = max_int(flags->field_width, 1);
	*conversion = ft_calloc(n + 1, sizeof(char));
	ft_memset(*conversion, flags->padding, n);
	if (flags->minus)
		(*conversion)[0] = 0;
	else
		(*conversion)[n - 1] = 0;
	write(flags->fd, *conversion, n);
	free_and_null((void **)conversion);
	flags->return_value += n;
}

void	chr_handler(t_flags *flags, va_list ap)
{
	char	*conversion;

	flag_check_char(flags);
	conversion = ft_calloc(2, sizeof(char));
	conversion[0] = (unsigned char)va_arg(ap, int);
	if (!conversion[0])
		chr_zero_handler(flags, &conversion);
	else
	{
		if (flags->field_width > 1)
			add_padding(flags, &conversion, 1);
		add_to_buffer(flags, &conversion);
	}
}

static char	*null_str_handler(t_flags *flags)
{
	int		condition;
	char	*str;

	condition = 6;
	if (flags->precision >= 0)
		condition = min_int(flags->precision, 6);
	str = ft_substr("(null)", 0, condition);
	return (str);
}

void	str_handler(t_flags *flags, va_list ap)
{
	const char	*str;
	char		*conversion;
	int			len;

	flag_check_char(flags);
	str = va_arg(ap, const char *);
	if (!str)
		conversion = null_str_handler(flags);
	else
	{
		if (flags->precision >= 0)
			len = min_int((int)ft_strlen(str), flags->precision);
		else
			len = ft_strlen(str);
		conversion = ft_calloc(len + 1, sizeof(char));
		ft_memcpy(conversion, str, len);
	}
	if ((int)ft_strlen(conversion) < flags->field_width)
		add_padding(flags, &conversion, 1);
	add_to_buffer(flags, &conversion);
}
