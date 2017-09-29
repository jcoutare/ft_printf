/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_flags2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:24:48 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/29 15:50:13 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		flag_larg(t_struct *data, char *flags)
{
	char		*truc;
	int			i;

	i = 0;
	data->larg = ft_atoi(flags);
	truc = ft_itoa(data->larg);
	i += (int)ft_strlen(truc);
	free(truc);
	return (i);
}

int		flag_prec(t_struct *data, char *flags)
{
	int			i;
	char		*truc;

	i = 1;
	if (flags[0] > '9' || flags[0] <= '0')
	{
		data->precfail = 1;
		return (i);
	}
	data->prec = ft_atoi(flags);
	truc = ft_itoa(data->prec);
	i += (int)ft_strlen(truc);
	free(truc);
	return (i);
}
