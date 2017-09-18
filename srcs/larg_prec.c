/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/18 16:20:10 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/lol.h"

void	larg(t_struct *data)
{
	char *str;

	data->larg = data->larg - (int)ft_strlen(data->resolved);
	printf("lele %d\n", ft_strlen(data->resolved));
	str = ft_strnew(data->larg);
	ft_memset(str, ' ', data->larg - 1); //-1 du scotch
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
	data->f_zero = 0;
	data->prec = 0;
}
