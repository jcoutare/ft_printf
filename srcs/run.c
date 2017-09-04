/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:15:33 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/04 17:41:41 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

int		ft_printf(char *str,...)
{
	va_list ap;
	the_union tamer;
	s_struct *lol;

	va_start(&ap, str);
	flag_d_signed(ap, lol);
	printf("%d\n", lol->octet);
	va_end(ap);
	return (0);
}

int		main(void)
{
	ft_printf("coucou %d", 42);
	return (0);
}
