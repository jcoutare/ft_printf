/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_conv_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:10:58 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/29 18:14:44 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flag_s(t_struct *data)
{
	data->sarg = va_arg(*data->ap, char *);
	if (data->sarg == 0)
		data->sarg = "(null)";
	if (data->prec > 0)
		prec_s(data);
	else if (data->sarg != NULL && data->precfail != 1)
		data->resolved = ft_strjoin(data->resolved, data->sarg);
	le_cafe(data);
}

void	flag_c(t_struct *data)
{
	data->resolved[0] = '\0';
	if (data->modif != 1)
		data->arg = (unsigned char)va_arg(*data->ap, int);
	if (data->arg == 0)
	{
		data->resolved[0] = '^';
		data->resolved[1] = '@';
		data->resolved[2] = '\0';
		data->tamer = 1;
	}
	else
	{
		data->resolved[0] = data->arg;
		data->resolved[1] = 0;
	}
	le_cafe(data);
}
