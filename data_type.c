/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:38:16 by zzin              #+#    #+#             */
/*   Updated: 2024/11/29 16:42:28 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
		return (ft_puthex(va_arg(args, unsigned), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned), 1));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned)));
	return (0);
}
