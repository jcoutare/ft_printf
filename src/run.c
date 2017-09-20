/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:15:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/20 17:22:03 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	la_resolvance(t_struct *data)
{
	int i;
	int c;

	i = 1;
	while (data->flags[i])
	{
		if (data->flags[i] <= '9' && data->flags[i] >= '1')
		{
			i += flag_larg(data, data->flags + i);
		}
		if (data->flags[i] == '.')
		{
			i += flag_prec(data, (data->flags + i + 1));
		}
		c = data->flags[i];
		if (data->flag_tab[c] != 0)
			data->flag_tab[c](data);
		i++;
	}
}

char	*get_flags(char *str, t_struct *data)
{
	int validflags;

//	printf("str = %s\n", str);
	data->flags = ft_strsub(str, 0, strichr_str(str, "sSpdDioOuUxXcC") + 1);
	if ((validflags = strcheck(data->flags, "%-+ #hljzsSpdDioOuUxXcC.") != -1))
	{
		//	printf("Val_strcheck= %d\n", validflags);
		return (str + validflags + 1);
	}
	if (str[0] == '%' && str[1] == '%')
	{
		flag_pourcent(data);
		str += 2;
	}
	else
	{
		la_resolvance(data);
		if (strichr_str(str, "sSpdDioOuUxXcC") + 1 == 1)
			str += 2;
		else
			str += strichr_str(str, "sSpdDioOuUxXcC") + 1;
	}
	return (str);
}

void	decoupe(char *str, t_struct *data)
{
	int  i = 0;
	while (strichr(str, '%') != -1)
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
	char *copy = ft_strdup(str);
	t_struct *data;

	data = NULL;
	va_start(ap, str);
	data = fill_struct(data, &ap);
	decoupe(copy, data);
	ft_putstr(data->fstring);
	va_end(ap);
	return (ft_strlen(data->fstring));
}
