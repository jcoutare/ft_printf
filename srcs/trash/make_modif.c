/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_modif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:00:55 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/18 12:22:16 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	make_l(t_struct *data)
{
	if (data->flags[ft_strlen(data->flags - 1)] == 'o' ||
		data->flags[ft_strlen(data->flags - 1)] == 'u' ||
		data->flags[ft_strlen(data->flags - 1)] == 'x' ||
		data->flags[ft_strlen(data->flags - 1)] == 'X')
		data->arg = va_arg(*data->ap, unsigned long int);
	else
		data->arg = va_arg(*data->ap, long int);
}

void	make_ll(t_struct *data)
{
	if (data->flags[ft_strlen(data->flags - 1)] == 'o' ||
		data->flags[ft_strlen(data->flags - 1)] == 'u' ||
		data->flags[ft_strlen(data->flags - 1)] == 'x' ||
		data->flags[ft_strlen(data->flags - 1)] == 'X')
		data->arg = va_arg(*data->ap, unsigned long int);
	else
		data->arg = va_arg(*data->ap, long int);
	if (data->conv_us == 1)
		data->arg = va_arg(*data->ap, unsigned long long int);
	else
		data->arg = va_arg(*data->ap, long long int);
}

void	make_h(t_struct *data)
{
	if (data->conv_us == 1)
		data->arg = va_arg(*data->ap, unsigned short int);
	else
		data->arg = va_arg(*data->ap, short int);
}

void	make_hh(t_struct *data)
{
	if (data->conv_us == 1)
		data->arg = va_arg(*data->ap, unsigned char);
	else
		data->arg = va_arg(*data->ap, signed char);
}

void	make_j(t_struct *data)
{
	if (data->conv_us == 1) // en vrai c intmax_t
		data->arg = va_arg(*data->ap, unsigned long);
	else
		data->arg = va_arg(*data->ap, long);
}


void	make_z(t_struct *data)
{
	if (data->conv_us == 1)
		data->arg = va_arg(*data->ap, size_t);
	else
		data->arg = va_arg(*data->ap, ssize_t);
}

