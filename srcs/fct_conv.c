/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_conv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 14:40:34 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/12 17:25:31 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	flag_d_signed(t_struct *data)
{
	int arg;

	data->conv = 1;
	arg = va_arg(*data->ap, int);
	if (data->larg > ft_strlen(ft_itoa(arg)))
		larg(data, arg);
	if (data->flag == 2)
		data->resolved = ft_strjoin(data->resolved, "+");
	data->resolved = ft_strjoin(data->resolved, ft_itoa(arg));
}

void	flag_d_unsigned(t_struct *data)
{
	int arg;

	data->conv = 1;
	arg = va_arg(*data->ap, int);
	if (data->flag == 2)
		data->resolved = ft_strjoin(data->resolved, "+");
	data->resolved = ft_itoa(arg);
}

void	flag_o_unsigned(t_struct *data)
{
	unsigned int arg;

	data->conv = 1;
	arg = va_arg(*data->ap, unsigned int);
	data->resolved = ft_itoa_base(arg, 8);
}

void	flag_hex_unsigned(t_struct *data)
{
	int i;
	unsigned int arg;

	i = 0;
	data->conv = 1;
	arg = va_arg(*data->ap, unsigned int);
	if (data->flag == 2)
		data->resolved = ft_strjoin(data->resolved, "+");
	data->resolved = ft_strjoin(data->resolved, ft_itoa_base(arg, 16));
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_hex_unsigned_maj(t_struct *data)
{
	unsigned int arg;

	data->conv = 1;
	arg = va_arg(*data->ap, unsigned int);
	data->resolved = ft_strjoin(data->resolved, ft_itoa_base(arg, 16));
}

void	flag_p(t_struct *data)
{
	int i;
	void *arg;

	i = 0;
	data->conv = 1;
	arg = va_arg(*data->ap, void *);
	data->resolved = ft_strjoin(data->resolved, "0x");
	data->resolved = ft_strjoin(data->resolved,
								ft_itoa_base((unsigned int)arg, 16));
	while (data->resolved[i])
	{
		data->resolved[i] = ft_tolower(data->resolved[i]);
		i++;
	}
}

void	flag_s(t_struct *data)
{
	data->resolved = va_arg(*data->ap, char *);
}

void	flag_c(t_struct *data)
{
	int arg;

	arg = va_arg(*data->ap, int);
	data->resolved[0] = arg;
	data->resolved[1] = 0;
}

