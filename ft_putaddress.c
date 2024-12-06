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

int	ft_putaddress(unsigned long int adds)
{
	int	len;

	len = 0;
	if (adds == 0)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthex(adds, "0123456789abcdef");
	return (len);
}
