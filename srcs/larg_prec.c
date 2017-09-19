/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/19 12:29:43 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/lol.h"

void	larg(t_struct *data)
{
	char *str;

	str = NULL;
	data->larg = data->larg - (int)ft_strlen(data->resolved);
	str = ft_strnew(data->larg);
	printf("data->larg = %d\n", data->larg);
	str = ft_memset(str, ' ', data->larg); //-1 du scotch
	printf(">%s|\n", str);
	data->resolved = ft_strjoin(str, data->resolved);
	data->larg = 0;
}

void	larg_moins(t_struct *data)
{
}

void	prec(t_struct *data)
{
	char *str;

	data->prec = data->prec - ft_strlen(ft_itoa(data->arg));
	printf("data->prec - strlen(arg) = %d\n", data->prec);
	if (data->prec > 0)
	{
		if ((long long)data->arg < 0)
		{
			str = ft_strnew(data->prec + 1);
			str[0] = '-';
			data->arg = data->arg * -1;
			ft_memset(str + 1, '0', data->prec + 1);
		}
		else
		{
			str = ft_strnew(data->prec);
			ft_memset(str, '0', data->prec);
		}
		data->resolved = ft_strjoin(data->resolved, str);
		free(str);
	}
	data->prec = 0;
}
