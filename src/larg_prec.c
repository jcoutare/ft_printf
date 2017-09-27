/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/27 15:08:47 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/lol.h"

void	larg(t_struct *data)
{
	char *str;

	str = NULL;
	data->larg = data->larg - (int)ft_strlen(data->resolved) + data->tamer;
	if (data->larg > 0)
	{
		str = ft_strnew(data->larg);
//		printf("data->larg = %d\n", data->larg);
		str = ft_memset(str, ' ', data->larg); //-1 du scotch
		data->resolved = ft_strjoin(str, data->resolved);
	}
	data->larg = 0;
}

void	prec(t_struct *data)
{
	char *str;

	data->prec = data->prec - ft_strlen(ft_itoa(data->arg));
if ((long long)data->arg < 0)
		data->prec++;
	if (data->prec > 0)
	{
		if ((long long)data->arg < 0)
		{
			str = ft_strnew(data->prec);
			str[0] = '-';
			data->arg = (long long)data->arg * -1;
			ft_memset(str + 1, '0', data->prec);
		}
		else
		{
			str = ft_strnew(data->prec);
			ft_memset(str, '0', data->prec);
		}
		data->resolved = ft_strjoin(data->resolved, str);
		free(str);
	}
	data->prec = -1;
}

void	prec_s(t_struct *data)
{
	data->prec = (int)ft_strlen(data->sarg) - data->prec;
	if (data->prec > 0)
	{
		data->resolved = ft_strnjoin(data->resolved, data->sarg, data->prec);
	}
	data->prec = 0;
}
