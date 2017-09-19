/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:15:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/19 13:36:06 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

void	la_resolvance(t_struct *data)
{
	int i;

	i = 1;
	printf("[%s]\n", data->flags);
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
		data->flag_tab[data->flags[i]](data);
		printf("|resolv2| le flag traited = %c\n", data->flags[i]);
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
	return (0);
}

#include <limits.h>
int		main(void)
{

//	ft_printf("%ld\n", LONG_MAX);
//	printf("%ld\n", LONG_MAX);
	printf("[---------[%D]------]\n", 42);
	printf("--------[+]-------\n"); // c good
	ft_printf("|FSTRING| = %+8.4d, %+12.6d|\n", 97, -97);
	printf("|THEREAL| = %+8.4d, %+12.6d|\n", 97, -97);
	ft_printf("|FSTRING| = %+8.4d, %+12.6d|\n", -97, 97);
	printf("|THEREAL| = %+8.4d, %+12.6d|\n", -97, 97);
	printf("--------[ ]-------\n"); // c good
	ft_printf("|FSTRING| = %- 8.4d, %-12.6d|\n", 97, -97);
	printf("|THEREAL| = %- 8.4d, %-12.6d|\n", 97, -97);
	ft_printf("|FSTRING| = %- 8.4d, %-12.6d|\n", -97, 42);
	printf("|THEREAL| = %- 8.4d, %-12.6d|\n", -97, 42);
	printf("--------[0]-------\n"); // c good
	ft_printf("|FSTRING| =%08d|\n", 97);
	printf("|THEREAL| =%08d|\n", 97);
	ft_printf("|FSTRING| =%08d,%08.6d|\n",-97, -97);
	printf("|THEREAL| =%08d,%08.6d|\n", -97, -97);
	printf("--------[0 ]-------\n");
	ft_printf("|FSTRING| =%0 10d|\n", 97);
	printf("|THEREAL| =%0 10d|\n", 97);
	ft_printf("|FSTRING| =%0 10d, %0 5d|\n", -97, 97);
	printf("|THEREAL| =%0 10d, %0 5d|\n", -97, 97);
/*	printf("--------[+]-------\n");
//	ft_printf("|FSTRING| = %+15d|\n", -97);
printf("|THEREAL| = %+15d|\n", -97);
printf("|THEREAL| = %+15d|\n", 97);
printf("--------[' ']-----\n");
//	ft_printf("|FSTRING| = % 5d|\n", -97);
printf("|THEREAL| = % 5d|\n", -97);
printf("|THEREAL| = % 5d|\n", 97);
printf("--------[-]-------\n");
ft_printf("|FSTRING| = %-10d|\n", -97);
printf("|THEREAL| = %-10d|\n", -97);
ft_printf("|FSTRING| = %-10d|\n", 97);
printf("|THEREAL| = %-10d|\n", 97); /*
printf("--------[0]-------\n");
//	ft_printf("|FSTRING| = %042d %-10d|\n", -97, -97);
printf("|THEREAL| = %042d %-10d|\n", -97, -97);
printf("|THEREAL| = %042d %-10d|\n", 97, 97);
printf("\n[--------[%x]------]\n", 42);
printf("--------[#]-------\n");
//	ft_printf("|FSTRING| = %#10x|\n", 97);
printf("|THEREAL| = %#10x|\n", 97);
printf("--------[+]-------\n"); < UDB (x)
ft_printf("|FSTRING| = %+15x|\n", 97);
printf("|THEREAL| = %+15x|\n", 97);
printf("--------[' ']-----\n"); < UDB (x)
ft_printf("|FSTRING| = % 5x|\n", 97);
printf("|THEREAL| = % 5x|\n", 97);
printf("--------[-]-------\n");
//	ft_printf("|FSTRING| = %-10x|\n", 97);
printf("|THEREAL| = %-10x|\n", 97);
printf("--------[0]-------\n");
//	ft_printf("|FSTRING| = %#042x %#-10x|\n", 97, 42);
printf("|THEREAL| = %#042x %#-10x|\n", 97, 42); */
	return (0);
}
