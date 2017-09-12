/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/12 17:33:52 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/lol.h"

void	larg(t_struct *data, int arg)
{
	int i;

	i = 0;
	if (data->flag == 4 && arg < 0)
		data->resolved = ft_strjoin(data->resolved, "-");
	if (data->flag == 5)
	{
		while (i < (data->larg - ft_strlen(ft_itoa(arg))))
		{
			data->resolved = ft_strjoin(data->resolved, "0");
			i++;
		}
	}
	else
	{
		while (i < (data->larg - ft_strlen(ft_itoa(arg))))
		{
			data->resolved = ft_strjoin(data->resolved, " ");
			i++;
		}
	}
}
