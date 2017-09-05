/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:44:30 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/05 14:25:15 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

s_struct	*fill_struct(s_struct *lol)
{
	if (!(lol = malloc(sizeof(s_struct))))
		return (NULL);
	lol->c = NULL;
	lol->octet = 0;
	lol->flag_tab['d'] = &flag_d_signed;
	lol->flag_tab['i'] = &flag_d_signed;
	lol->flag_tab['o'] = &flag_o_unsigned;
	lol->flag_tab['u'] = &flag_d_unsigned;
	lol->flag_tab['x'] = &flag_hex_unsigned;
	lol->flag_tab['X'] = &flag_hex_unsigned_maj;
	lol->flag_tab['c'] = &flag_c;
	lol->flag_tab['s'] = &flag_s;
//	lol->flag_tab['p'] = flag_p;
	return (lol);
}
