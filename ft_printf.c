/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:21:27 by zzin              #+#    #+#             */
/*   Updated: 2024/11/25 19:07:30 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	data_type(char c, va_list args)
{
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_puthexp((unsigned long int)va_arg(args, void *)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned), 1));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += data_type(str[++i], args);
		else
			len = ft_putchar(str[i]) + len + 1;
		i++;
	}
	return (len);
}
