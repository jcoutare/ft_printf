/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:51:21 by jcoutare          #+#    #+#             */
/*   Updated: 2017/10/09 13:27:20 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>
int		main(void)
{
	ft_printf("cc%#.4X et %#0012x %#04hX !!", 0xaef, 0xe, (unsigned short)0);
	printf("\ncc%#.4X et %#0012x %#04hX !!", 0xaef, 0xe, (unsigned short)0);
}
