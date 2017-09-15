/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 10:20:56 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/15 15:28:38 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	make_diese(t_struct *data)
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

	if (data->m_larg <= 0)
		return ;
	if (!(str = ft_strnew(data->m_larg)))
		return ;
	str = ft_memset(str, ' ', data->m_larg);
	if (!(data->resolved = ft_strjoin(data->resolved, str)))
		return ;
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

	if (data->f_moins == 1)
		return ;
	if (data->m_prec != -1)
		return ;
	if (data->m_larg <= 0)
		return ;
	if (!(str = ft_strnew(data->m_larg)))
		return ;
	str = ft_memset(str, '0', data->m_larg);
	if (!(data->resolved = ft_strjoin(data->resolved, str)))
		return ;
}
