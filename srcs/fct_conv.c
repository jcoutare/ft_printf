/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:34 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/11 15:15:25 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	flag_d_signed(t_struct *data)
{
	char *str;

	str = ft_itoa(va_arg(*data->ap, int));
	data->len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_d_unsigned(t_struct *data)
{
	char *str;

	str = ft_itoa(va_arg(*data->ap, unsigned int));
	data->len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_o_unsigned(t_struct *data)
{
	char *str;

	str = ft_itoa_base(va_arg(*data->ap, unsigned int), 8);
	data->len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_hex_unsigned(t_struct *data)
{

	int i = 0;
	data->resolved = ft_strjoin(data->resolved,
							   ft_itoa_base(va_arg(*data->ap, unsigned int), 16));
	data->len += ft_strlen(data->resolved);
	while (data->resolved[i])
	{
		ft_tolower(data->resolved[i]);
		//printf("%c\n", lol->ret[i]);
		i++;
	}
}

void	flag_hex_unsigned_maj(t_struct *data)
{
	char *str;

	str = ft_itoa_base(va_arg(*data->ap, unsigned int), 16);
	data->len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	flag_s(t_struct *data)
{
	char *str;

	str = va_arg(*data->ap, char *);
	data->len += ft_strlen(str);
	ft_putstr(str);
}

void	flag_c(t_struct *data)
{
	ft_putchar(va_arg(*data->ap, int));
	data->len++;
}

