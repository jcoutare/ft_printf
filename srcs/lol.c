/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:19:24 by jcoutare          #+#    #+#             */
/*   Updated: 2017/08/19 14:34:33 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

int		print_s(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

int		print_d(int nbr)
{
	ft_putnbr(nbr);
	return(ft_strlen(ft_itoa(nbr)));
}
int		get_flags(char *str, va_list ap, the_union tamer)
{
	int i;
	int ret;

	ret = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				ret--;
				i++;
			}
			else if (str[i + 1] == 's')
			{
				ret += (print_s(va_arg(ap, char *)) - 2) ;
				i += 2;
			}
			else if (str[i] == '%' && str[i + 1] == 'd')
			{
				ret += (print_d(va_arg(ap, int)) - 2);
				i += 2;
			}
			else if (str[i] == '%' && str[i + 1] == 'c')
			{
				ft_putchar(va_arg(ap, char));
				ret--;
				i += 2;
			}
		}
		ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (ret + i);
}



int		ft_printf(char *str,...)
{
	va_list ap;
	int i;
	the_union tamer;

	va_start(&ap, str);
	i = get_flags(str, ap, tamer);
	return (i);
}

int		main(void)
{
//	printf("le vrai %d\n",printf(".%c\n", 97));
//	printf("le mien %d\n", ft_print(".%c\n", 97));
	return (0);
	}
