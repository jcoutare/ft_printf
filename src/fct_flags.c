/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:38:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/26 18:09:06 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"


int 	flag_larg(t_struct *data, char *flags)
{
	int i;

	i = 0;
	data->larg = ft_atoi(flags);
	i += (int)ft_strlen(ft_itoa(data->larg));
//	printf("larg = %d\n", data->larg);
	return (i);
}

int		flag_prec(t_struct *data, char *flags)
{
	int i;

	i = 1;
	if (flags[0] > '9' || flags[0] <= '0')
	{
		data->precfail = 1;
		if (flags[0] == '0')
			i++;
		return (i);
	}
	data->prec = ft_atoi(flags);
	i += (int)ft_strlen(ft_itoa(data->prec));
//	printf("prec = %d\n", data->prec);
	return (i);
}

void	flag_diese(t_struct *data)
{
	data->f_sharp = 1;
}

void	flag_moins(t_struct *data)
{
	data->f_moins = 1;
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
	data->f_zero = 1;
}
