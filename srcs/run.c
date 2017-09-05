/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:15:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/05 15:58:43 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"
void	la_balade(char *str, va_list ap)
{
	int i;
	s_struct *lol;

	i = 0;
	lol = fill_struct(lol);
	while (str[i])
	{
		if (str[i] == '%')
		{
			lol->flag_tab[str[i + 1]](ap, lol);
			i += lol->octet;
		}
		if (str[i])
			ft_putchar(str[i++]);
	}
}

int		ft_printf(char *str,...)
{
	va_list ap;
	the_union tamer;

	va_start(&ap, str);
	la_balade(str, ap);
	va_end(ap);
	return (0);
}

int		main(void)
{
	ft_printf("coucou %s", "42");
	return (0);
}
