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

int	ft_putaddress(unsigned long int decimal)
{
	char		address[16];
	char		*hexdigits;
	char		buffer[16];
	int			i;
	int			index;

	i = 0;
	index = 0;
	hexdigits = "0123456789abcdef";
	if (decimal == 0)
		return (ft_putstr("(nil)"));
	while (decimal > 0)
	{
		buffer[index++] = hexdigits[decimal % 16];
		decimal /= 16;
	}
	address[0] = '0';
	address[1] = 'x';
	while (i < index)
	{
		address[2 + i] = buffer[index - 1 - i];
		i++;
	}
	address[2 + index] = '\0';
	return (ft_putstr(address));
}
