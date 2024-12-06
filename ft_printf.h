/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:27:14 by zzin              #+#    #+#             */
/*   Updated: 2024/11/30 15:12:47 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

int		data_type(char c, va_list args);
int		ft_printf(const char *str, ...);
int		ft_puthex(unsigned long int n, char	*s);
int		ft_putaddress(unsigned long int decimal);
size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putunsigned(unsigned int n);

#endif
