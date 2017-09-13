/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:38:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/13 11:38:47 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

int 	flag_larg(t_struct *data, char *flags)
{
	int i;

	i = 0;
	data->larg = ft_atoi(flags);
	i += ft_strlen(ft_itoa(data->larg));
	printf("larg = %d\n", data->larg);
	return (i);
}

void	flag_diese(t_struct *data)
{
	int i;

	i = 0;
	data->flag = 1;
	while (data->flags[i])
	{
		if (data->flags[i] == 'o')
		{
			data->resolved = ft_strjoin(data->resolved, "o");
			return ;
		}
		else if (data->flags[i] == 'x' || data->flags[i] == 'X')
		{
			data->resolved = ft_strjoin(data->resolved, "0X");
			return ;
		}
		i++;
	}
}

void	flag_moins(t_struct *data)
{
	data->flag = 4;
}

void	flag_plus(t_struct *data)
{
	data->flag = 2;
}

void	flag_space(t_struct *data)
{
	data->flag = 3;
}

void	flag_zero(t_struct *data)
{
	data->flag = 5;
}
