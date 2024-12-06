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

#include "ft_printf.h"

static int	leen(int n)
{
	int				i;
	unsigned int	uni;

	i = 0;
	if (n < 0)
	{
		uni = -n;
		i++;
	}
	else
		uni = n;
	while (uni > 0)
	{
		uni /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	uni;
	int				numlen;

	if (n < 0)
	{
		ft_putchar('-');
		uni = -n;
	}
	else if (n == 0)
		return (write(1, "0", 1));
	else
		uni = n;
	numlen = leen(n);
	if (uni > 9)
	{
		ft_putnbr(uni / 10);
		ft_putchar((uni % 10) + '0');
	}
	else
		ft_putchar(uni + '0');
	return (numlen);
}
