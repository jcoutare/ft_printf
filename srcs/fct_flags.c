/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:38:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/11 15:11:40 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	flag_diese(t_struct *data)
{
	int i;

	i = 0;
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
