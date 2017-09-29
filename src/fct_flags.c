/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:38:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/29 15:21:56 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flag_diese(t_struct *data)
{
	data->f_sharp = 1;
}

void	flag_moins(t_struct *data)
{
	data->f_moins = 1;
	data->f_zero = 0;
}

void	flag_plus(t_struct *data)
{
	data->f_plus = 1;
}

void	flag_space(t_struct *data)
{
	data->f_space = 1;
}

void	flag_zero(t_struct *data)
{
	if (data->f_moins == 0 && data->precfail != 1)
		data->f_zero = 1;
}
