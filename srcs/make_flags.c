/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:20:56 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/18 16:12:12 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	make_sharp(t_struct *data)
{
	if (data->flags[ft_strlen(data->flags - 1)] != 'o' &&
		data->flags[ft_strlen(data->flags - 1)] != 'x')
		return ;
	if (data->flags[ft_strlen(data->flags - 1)] == 'o')
		if (!(data->resolved = ft_strjoin(data->resolved, "o")))
			return ;
	if (data->flags[ft_strlen(data->flags - 1)] == 'x'
		|| data->flags[ft_strlen(data->flags - 1)] == 'X')
		if (!(data->resolved = ft_strjoin(data->resolved, "0X")))
			return ;
}

void	make_moins(t_struct *data)
{
	char *str;

	data->larg = data->larg - (int)ft_strlen(data->resolved);
	if (data->larg > 0)
	{
		str = ft_strnew(data->larg);
		ft_memset(str, ' ', data->larg);
		data->resolved = ft_strjoin(data->resolved, str); //data->resolved leak
	}
	data->larg = 0;
}

void	make_plus(t_struct *data, int signe)
{
	if (signe == 1) // signe 1 = neg;
		data->resolved = ft_strjoin(data->resolved, "-");
	else
		data->resolved = ft_strjoin(data->resolved, "+");
}

void	make_space(t_struct *data, int signe)
{
	if (signe != 1)
		data->resolved = ft_strjoin(data->resolved, " ");
}

void	make_zero(t_struct *data)
{
	char *str;

	data->larg = data->larg - (int)ft_strlen(data->resolved);
	if (data->larg <= 0)
		return ;
	if (!(str = ft_strnew(data->larg)))
		return ;
	str = ft_memset(str, '0', data->larg);
	if (!(data->resolved = ft_strjoin(data->resolved, str)))
 		return ;
}
