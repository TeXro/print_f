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

int	ft_puthex(unsigned int decimal, int up)
{
	char		hex[16];
	char		*hexpdigits;
	int			i;
	char		buffer[16];
	int			index;

	i = 0;
	index = 0;
	hexpdigits = "0123456789abcdef";
	if (up == 1)
		hexpdigits = "0123456789ABCDEF";
	if (decimal == 0)
		return (write(1, "0", 1));
	while (decimal > 0)
	{
		buffer[index++] = hexpdigits[decimal % 16];
		decimal /= 16;
	}
	while (i < index)
		hex[i++] = buffer[index - 1 - i];
	hex[2 + index] = '\0';
	return (ft_putstr(hex));
}
