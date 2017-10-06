/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:51:21 by jcoutare          #+#    #+#             */
/*   Updated: 2017/10/06 19:50:51 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>
int		main(void)
{
/*	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%lc< >%lc< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("m_ret =%d\n", ft_printf("le mien >%lc< >%lc< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%ld< >%ld< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("m_ret =%d\n", ft_printf("le mien >%ld< >%ld< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%lx< >%lx< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("m_ret =%d\n", ft_printf("le mien >%lx< >%lx< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%ls< >%lx< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("m_ret =%d\n", ft_printf("le mien >%ls< >%lx< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%lu< >%lx< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
	printf("m_ret =%d\n", ft_printf("le mien >%lu< >%lx< >%i< >%o< >%u< >%x<\n", 0, 97, INT_MIN, INT_MAX, 0, 1000));
*/
	printf("r_ret =%d\n", printf("le vrai>%.5d\n", -421));
	printf("m_ret =%d\n", ft_printf("le mien>%.5d\n", -421));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>%00+10.4d\n", 0));
	printf("m_ret =%d\n", ft_printf("le mien>%00+10.4d\n", 0));

}
