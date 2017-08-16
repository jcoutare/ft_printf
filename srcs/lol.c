/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:19:24 by jcoutare          #+#    #+#             */
/*   Updated: 2017/08/16 11:26:32 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"
#include <stdarg.h>

int		get_flags(char *str, va_list ap, the_union tamer)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 's')
			{
				tamer.str = va_arg(ap, char *);
				printf("%s\n", tamer.str);
			}
			if (str[i + 1] == 'd')
				 tamer.i = va_arg(ap, int);
		}
		i++;
	}
	va_end(ap);
	return (0);
}

int		print(char *str,...)
{
	va_list ap;
	int i;
	char tmp[2];
	the_union tamer;

	i = 0;
	va_start(&ap, str);
	get_flags(str, ap, tamer);
	return (0);
}

int		main(void)
{
	print("%s coucou\n", "ca va");
	return (0);
}
