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

#include "ft_printf.h"

int	ft_puthex(unsigned long int n, char	*hexs)
{
	char	buffer[16];
	int		i;
	int		count;

	if (n == 0)
		return (write(1, "0", 1));
	i = 0;
	while (n > 0)
	{
		buffer[i++] = hexs[n % 16];
		n /= 16;
	}
	count = i;
	while (i > 0)
		ft_putchar(buffer[--i]);
	return (count);
}
