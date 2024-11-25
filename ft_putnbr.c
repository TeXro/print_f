/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:51:17 by zzin              #+#    #+#             */
/*   Updated: 2024/11/24 21:25:43 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	len(int n)
{
	int	i;
	int	m;

	i = 0;
	m = n;
	while (m > 0)
	{
		m /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	valen;

	valen = len(n);
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
	return (len);
}
