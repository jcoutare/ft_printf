/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/28 15:58:24 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/lol.h"

void	larg(t_struct *data)
{
	char *tmp;
	char *str;

	tmp = data->resolved;
	str = NULL;
	data->larg = data->larg - (int)ft_strlen(data->resolved) + data->tamer;
	if (data->larg > 0)
	{
		str = ft_strnew(data->larg);
		str = ft_memset(str, ' ', data->larg);
		data->resolved = ft_strjoin(str, tmp);
		free(tmp);
	}
	data->larg = 0;
}

void	prec(t_struct *data)
{
	char *tmp;
	char *str;

	tmp = ft_itoa(data->arg);
	data->prec = data->prec - ft_strlen(tmp);
	free(tmp);
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
