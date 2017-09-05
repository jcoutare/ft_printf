/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 16:07:30 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/05 14:22:28 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	flag_d_signed(va_list ap, s_struct *lol)
{
	char *str;

	str = ft_itoa(va_arg(ap, int));
	lol->octet += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_d_unsigned(va_list ap, s_struct *lol)
{
	char *str;

	str = ft_itoa(va_arg(ap, unsigned int));
	lol->octet += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_o_unsigned(va_list ap, s_struct *lol)
{
	char *str;

	str = ft_itoa_base(va_arg(ap, unsigned int), 8);
	lol->octet += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_hex_unsigned(va_list ap, s_struct *lol)
{
	char *str;

	str = ft_itoa_base(va_arg(ap, unsigned int), 16);
	lol->octet += ft_strlen(str);
	while (*str)
		ft_tolower(*str++);
	ft_putstr(str);
	free(str);
}

void	flag_hex_unsigned_maj(va_list ap, s_struct *lol)
{
	char *str;

	str = ft_itoa_base(va_arg(ap, unsigned int), 16);
	lol->octet += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_s(va_list ap, s_struct *lol)
{
	char *str;

	str = va_arg(ap, char *);
	lol->octet += ft_strlen(str);
	ft_putstr(str);
}

void	flag_c(va_list ap, s_struct *lol)
{
	ft_putchar(va_arg(ap, int));
	lol->octet++;
}

