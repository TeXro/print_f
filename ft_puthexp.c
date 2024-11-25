/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:29:00 by zzin              #+#    #+#             */
/*   Updated: 2024/11/24 21:25:57 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexp(unsigned long int decimal)
{
	char		hexp[16];
	char		*hexpdigits;
	char		buffer[16];
	int			i;
	int			index;

	i = 0;
	index = 0;
	hexpdigits = "0123456789abcdef";
	if (decimal == 0)
		return (write(1, "0", 1));
	while (decimal > 0)
	{
		buffer[index++] = hexpdigits[decimal % 16];
		decimal /= 16;
	}
	hexp[0] = '0';
	hexp[1] = 'x';
	while (i < index)
		hexp[2 + i++] = buffer[index - 1 - i];
	hexp[2 + index] = '\0';
	return (ft_putstr(hexp));
}
