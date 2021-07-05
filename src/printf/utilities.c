/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchoi-ro <jchoi-ro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:31:50 by jchoi-ro          #+#    #+#             */
/*   Updated: 2021/05/25 21:35:56 by jchoi-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digits(int num)
{
	int	size;

	size = 0;
	while (num != 0)
	{
		num /= 10;
		size++;
	}
	if (!size)
		size = 1;
	return (size);
}

void	add_zeroes(t_flags *flags, char **str, int sign)
{
	char	*padding;
	int		n;
	int		len;
	int		size;
	int		sign_add;

	sign_add = 0;
	n = flags->precision - ft_strlen(*str);
	if (n < 0)
		n = 0;
	if (sign == -1)
		sign_add = 1;
	len = sign_add + 1 + max_int(flags->precision, ft_strlen(*str));
	padding = ft_calloc(len, sizeof(char));
	if (!padding)
		return ;
	size = sign_add + n;
	ft_memset(padding, '0', size);
	ft_memcpy(padding + size, *str, ft_strlen(*str));
	if (sign == -1)
		padding[0] = '-';
	free_and_null((void **)str);
	*str = ft_strdup(padding);
	free_and_null((void **)&padding);
}

void	add_padding(t_flags *flags, char **str, int sign)
{
	char	*pad;
	char	*temp;
	int		cond;

	cond = 0;
	if (sign == -1 && flags->zero)
		cond = 1;
	pad = ft_calloc(flags->field_width - ft_strlen(*str) + cond + 1, 1);
	if (!pad)
		return ;
	ft_strset(pad, flags->padding, flags->field_width - ft_strlen(*str) + cond);
	if (flags->minus)
		temp = ft_strjoin(*str, pad);
	else
		temp = ft_strjoin(pad, *str + cond);
	if (flags->zero)
	{
		temp[0] = '0';
		if (sign == -1)
			temp[0] = '-';
	}
	free_and_null((void **)&pad);
	free_and_null((void **)str);
	*str = ft_strdup(temp);
	free_and_null((void **)&temp);
}

void	add_to_buffer(t_flags *flags, char **conversion)
{
	char	*temp;

	temp = ft_strjoin(flags->buffer, *conversion);
	if (!temp)
		return ;
	if (flags->buffer)
		free_and_null((void **)&flags->buffer);
	if (*conversion)
		free_and_null((void **)conversion);
	flags->buffer = ft_strdup(temp);
	free_and_null((void **)&temp);
}
