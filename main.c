/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:51:21 by jcoutare          #+#    #+#             */
/*   Updated: 2017/10/06 13:21:21 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <limits.h>
int		main(void)
{
/*	printf("r_ret =%d\n", printf("le vrai >%ls\n","salut"));
	printf("m_ret =%d\n", ft_printf("le mien >%ls\n","salut"));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%10.5d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%10.5d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%+10.5d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%+10.5d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%-10.5d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%-10.5d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%010.5d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%010.5d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >% 10.5d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >% 10.5d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%#10.5x\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%#10.5x\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%ls\n","salut"));
	printf("m_ret =%d\n", ft_printf("le mien >%ls\n","salut"));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%10.5d\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%10.5d\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%+10.5d\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%+10.5d\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%-10.5d\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%-10.5d\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%010.5d\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%010.5d\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >% 10.5d\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >% 10.5d\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%#10.5x\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%#10.5x\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%.3s\n","salut"));
	printf("m_ret =%d\n", ft_printf("le mien >%.3s\n","salut"));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%42.42d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%42.42d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%+42.42d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%+42.42d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%-42.42d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%-42.42d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%042.42d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%042.42d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >% 42.42d\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >% 42.42d\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%#42.42x\n", -42));
	printf("m_ret =%d\n", ft_printf("le mien >%#42.42x\n", -42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%10.5ld\n", LONG_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%10.5ld\n", LONG_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%+10.5lld\n", LLONG_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%+10.5lld\n", LLONG_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%-10.5hd\n", SHRT_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%-10.5hd\n", SHRT_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%010.5hhd\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%010.5hhd\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >% 10.5jd\n", INT_MAX - 1));
	printf("m_ret =%d\n", ft_printf("le mien >% 10.5jd\n", INT_MAX - 1));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%#10.5zx\n", SSIZE_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%#10.5zx\n", SSIZE_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%10.5lx\n", LONG_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%10.5lx\n", LONG_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%+10.5llx\n", LLONG_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%+10.5llx\n", LLONG_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%-10.5hx\n", SHRT_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%-10.5hx\n", SHRT_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%010.5hhx\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%010.5hhx\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >% 10.5jx\n", INT_MAX - 1));
	printf("m_ret =%d\n", ft_printf("le mien >% 10.5jx\n", INT_MAX - 1));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%#10.5zo\n", SSIZE_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%#10.5zo\n", SSIZE_MAX));
	printf("__________\n")
	printf("r_ret =%d\n", printf("le vrai >%10.5lo\n", LONG_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%10.5lo\n", LONG_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%+10.5llo\n", LLONG_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%+10.5llo\n", LLONG_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%-10.5ho\n", SHRT_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%-10.5ho\n", SHRT_MAX));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%010.5hho\n", 42));
	printf("m_ret =%d\n", ft_printf("le mien >%010.5hho\n", 42));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >% 10.5jo\n", INT_MAX - 1));
	printf("m_ret =%d\n", ft_printf("le mien >% 10.5jo\n", INT_MAX - 1));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai >%#10.5zu\n", SSIZE_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%#10.5zu\n", SSIZE_MAX));
	printf("__________\n");*/
	printf("r_ret =%d\n", printf("le vrai >%c< >%c< >%d< >%d<\n", 0, 97, INT_MIN, INT_MAX));
	printf("m_ret =%d\n", ft_printf("le mien >%c< >%c< >%d< >%d<\n", 0, 97, INT_MIN, INT_MAX));
	printf("__________\n");
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

}
