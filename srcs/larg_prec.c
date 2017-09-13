/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/13 16:44:13 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/lol.h"

void	larg(t_struct *data, int arg)
{
	char *str;
	int size;
	size_t lol;

	lol = ft_strlen(ft_itoa_base(arg, 16)) + ft_strlen(data->resolved);
	size = data->larg - (int)lol;
	str = ft_strnew(size);
	if (data->flag == 5 && arg < 0)
	{
		data->resolved = ft_strjoin(data->resolved, "-");
	}
	if (data->flag == 5)
	{
		ft_memset(str, '0', size);
		data->resolved = ft_strjoin(data->resolved, str);
	}
	else if (data->flag != 4)
	{
		ft_memset(str, ' ', size);
		data->resolved = ft_strjoin(data->resolved, str);
	}
	free(str);
}

void	larg_moins(t_struct *data, int arg)
{
	char *str;
	int size;

	size = data->larg - ft_strlen(ft_itoa(arg));
	str = ft_strnew(size);
	ft_memset(str, ' ', size);
	data->resolved = ft_strjoin(data->resolved, str);
	free(str);
}
