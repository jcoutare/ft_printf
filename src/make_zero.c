/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:48:36 by jcoutare          #+#    #+#             */
/*   Updated: 2017/10/02 15:23:22 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*do_plus_zero(t_struct *data, char *str)
{
	data->larg--;
	if (!(str = ft_strnew(data->larg)))
		return (NULL);
	str[0] = '+';
	str[1] = '\0';
	ft_memset(str + 1, '0', data->larg);
	return (str);
}

char	*do_neg_zero(t_struct *data, char *str)
{
	if (!(str = ft_strnew(data->larg + 1)))
		return (NULL);
	str[0] = '-';
	data->arg = data->arg * -1;
	ft_memset(str + 1, '0', data->larg + 1);
	return (str);
}

char	*make_zerobis(t_struct *data)
{
	char *str;

	str = NULL;
	if ((long long)data->arg < 0)
		str = do_neg_zero(data, str);
	else if (data->f_plus == 1)
		str = do_plus_zero(data, str);
	else if (data->f_space == 1)
	{
		data->larg--;
		if (!(str = ft_strnew(data->larg)))
			return (NULL);
		str[0] = ' ';
		ft_memset(str + 1, '0', data->larg);
	}
	else
	{
		if (!(str = ft_strnew(data->larg)))
			return (NULL);
		str = ft_memset(str, '0', data->larg);
	}
	return (str);
}

void	make_zero(t_struct *data)
{
	char *tmp;
	char *str;

	tmp = data->resolved;
	data->larg = data->larg - (int)ft_strlen(data->resolved);
	if (data->larg > 0)
	{
		str = make_zerobis(data);
		if (data->f_sharp == 1)
		{
			str = ft_strnfjoin("0X", str + 2);
		}
		if (!(data->resolved = ft_strjoin(str, tmp)))
			return ;
		free(tmp);
	}
	else if (data->f_plus == 1)
		data->resolved = ft_strnfjoin("+", data->resolved);
}
