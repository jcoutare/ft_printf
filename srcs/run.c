/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:15:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/12 15:46:10 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	la_resolvance(t_struct *data)
{
	int i;

	i = 1;

	while (data->flags[i])
	{
		printf("|resolv| le flag traited = %c\n", data->flags[i]);
		if (data->flags[i] <= '9' && data->flags[i] >= '1')
		{
			i += flag_larg(data, data->flags + i);
		}
		data->flag_tab[data->flags[i]](data);
		printf("|resolv| data->ret = %s\n", data->resolved);
		i++;
	}
}

char	*get_flags(char *str, t_struct *data)
{
	data->flags = ft_strsub(str, 0, strichr_str(str, "sSpdDioOuUxXcC") + 1);
	la_resolvance(data);
	str += strichr_str(str, "sSpdDioOuUxXcC") + 1;
	return (str);
}

void	decoupe(char *str, t_struct *data)
{
	int  i = 0;
	while (strichr(str, '%') != 0)
	{
		data->fstring = ft_strnjoin(data->fstring, str, strichr(str, '%'));
		str = get_flags(str + strichr(str, '%'), data);
		data->fstring = ft_strjoin(data->fstring, data->resolved);
		ft_memset(data->resolved, '\0', ft_strlen(data->resolved));
		i++;
	}
	data->fstring = ft_strjoin(data->fstring, str);
}

int		ft_printf(char *str,...)
{
	va_list ap;
	the_union tamer;
	char *copy = ft_strdup(str);
	t_struct *data;

	va_start(ap, str);
	data = fill_struct(data, &ap);
	decoupe(copy, data);
	printf("|FSTRING| = %s\n", data->fstring);
	va_end(ap);
	return (0);
}

int		main(void)
{
	ft_printf("Arthur %8d le mangeur de tic tac", -97);
	return (0);
}


















/*POUBELLE
	if (lol->fstring == NULL)
	{

		printf("|FSTRING| = %s\n", lol->fstring);
		printf("|STR| = %s\n", str);
		get_flags(str + strichr(str, '%'), lol);
		str = str + lol->endflags;
		printf("|STR| = %s\n", str);
		lol->fstring = ft_strjoin(lol->fstring, lol->resolved);
		printf("|FSTRING| = %s\n", lol->fstring);
		ft_memset(lol->resolved, '\0', ft_strlen(lol->resolved));
	}
	while (strichr(str, '%') != 0)
	{
		lol->fstring = ft_strnjoin(lol->fstring, str, strichr(str, '%'));
		printf("|FSTRING| = %s\n", lol->fstring);
		get_flags(str + strichr(str, '%'), lol);
		str = str + lol->endflags;
		lol->fstring = ft_strjoin(lol->fstring, lol->resolved);
		ft_memset(lol->resolved, '\0', ft_strlen(lol->resolved));
	}*/
