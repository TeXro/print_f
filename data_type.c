/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:38:16 by zzin              #+#    #+#             */
/*   Updated: 2024/11/30 15:09:23 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	data_type(char c, va_list args)
{
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putaddress((unsigned long int)va_arg(args, void *)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned), "0123456789ABCDEF"));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned)));
	return (0);
}
