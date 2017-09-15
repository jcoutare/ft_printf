/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_modif.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:11:24 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/15 15:42:45 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	modif_l(t_struct *data)
{
	int l;


	if (data->modif_l == 1)
	{
		modif_ll(data);
		return ;
	}
	data->modif_l = 1;
	l = va_arg(*data->ap, int);
	printf("l atm = %d\n", l);
	data->arg = l;
}

void	modif_ll(t_struct *data)
{
	if (data->modif_ll == 1)
		return ;
	data->modif_ll = 1;
}

void	modif_h(t_struct *data)
{
	if (data->modif_h == 1)
	{
		modif_hh(data);
		return ;
	}
	data->modif_h = 1;
}

void	modif_hh(t_struct *data)
{
	if (data->modif_hh == 1)
		return ;
	data->modif_hh = 1;
}

void	modif_j(t_struct *data)
{
	if (data->modif_j == 1)
		return ;
	data->modif_j = 1;
}

void	modif_z(t_struct *data)
{
	if (data->modif_z == 1)
		return ;
	data->modif_z = 1;
}
