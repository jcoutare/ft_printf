/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 15:44:30 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/04 16:06:07 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lol.h"

s_struct	*fill_tab(s_struct *lol)
{
	flag_tab['d'] = &flag_d_signed;
	flag_tab['i'] = &flag_d_signed;
	flag_tab['o'] = &flag_o_unsigned;
	flag_tab['u'] = &flag_d_unsigned;
	flag_tab['x'] = &flag_hex_unsigned;
	flag_tab['X'] = &flag_hex_unsigned_maj;
	flag_tab['c'] = &flag_c;
	flag_tab['s'] = &flag_s;
	flag_tab['p'] = flag_p;
	return (lol);
}
