/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   larg_prec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:21:50 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/14 12:32:42 by jcoutare         ###   ########.fr       */
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

	free(str);
}

void	larg_moins(t_struct *data)
{
	char *str;
	int size;

	size = data->larg - ft_strlen(data->resolved);
	str = ft_strnew(size);
	ft_memset(str, ' ', size);
	data->resolved = ft_strjoin(data->resolved, str);
	free(str);
}
