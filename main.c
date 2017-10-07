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
  
	printf("r_ret =%d\n", printf("le vrai>%.5d\n", -421));
	printf("m_ret =%d\n", ft_printf("le mien>%.5d\n", -421));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>%00+10.4d\n", 0));
	printf("m_ret =%d\n", ft_printf("le mien>%00+10.4d\n", 0));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>%+12.5d\n", 140));
	printf("m_ret =%d\n", ft_printf("le mien>%+12.5d\n", 140));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>%20.ld et %.4hhi !\n", 0x11ffaa147, (signed char)-8));
	printf("m_ret =%d\n", ft_printf("le mien>%20.ld et %.4hhi !\n", 0x11ffaa147, (signed char)-8));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>toto%.0d et %+.i et  %   .0D !!!", 0, 0, 0));
	printf("m_ret =%d\n", ft_printf("le mien>toto%.0d et %+.i et  %   .0D !!!", 0, 0, 0));
	printf("__________\n");
	printf("%   .0D !!!\n", 0);
	ft_printf("%   .0D !!!\n", 0);
	printf("__________\n"); 
	printf("r_ret =%d\n", printf("le vrai> % 20.12ld et % 05D% 4.8hi !", 0x11ffaa147, 24,(short)-2345));
	printf("m_ret =%d\n", ft_printf("le mien> % 20.12ld et % 05D% 4.8hi !", 0x11ffaa147, 24,(short)-2345));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>%#1.2o %0012.O\n", 0, 123654789));
	printf("m_ret =%d\n", ft_printf("le mien>%#1.2o %0012.O\n", 0, 123654789));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>%03o\n", 0));
	printf("m_ret =%d\n", ft_printf("le mien>%03o\n", 0));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>test%#.4o et %02o %0#14.0o!!", 012, 036, 12587499));
	printf("m_ret =%d\n", ft_printf("le mien>test%#.4o et %02o %0#14.0o!!", 012, 036, 12587499));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>t%04.2o%#2oet %#-8.3o titi", 0, 0, 0));
	printf("m_ret =%d\n", ft_printf("le mien>t%04.2o%#2oet %#-8.3o titi", 0, 0, 0));
	printf("__________\n");
	printf("r_ret =%d\n", printf("le vrai>toto %0##0.4X%#4.2xet c'est fini \n", 0x037a, 0x9e));
	printf("m_ret =%d\n", ft_printf("le mien>toto %0##0.4X%#4.2xet c'est fini \n", 0x037a, 0x9e));
	printf("r_%d\n",printf("le vrai>hello >%c< ca%----4c %1c va %10c%-c ??\n", 0, '\0', '\n',
	(char)564, 0));
	printf("%d\n", ft_printf("le mien>hello >%c< ca%----4c %1c va %10c%-c ??\n", 0, '\0', '\n',
	(char)564, 0));
  
	printf("r_ret =%d\n", printf("le vrai>cc%#.4X et %#0012x %#04hX !!\n", 0xaef, 0xe,
	(unsigned short)0));
	printf("m_ret =%d\n", ft_printf("le mien>cc%#.4X et %#0012x %#04hX !!\n", 0xaef, 0xe,				  (unsigned short)0)); */
  printf("__________\n");
  int i = 42;
  void *lol;
  printf("r_ret =%d\n", printf("le vrai : >%p< >%p< >%20p< >%-25p<", 0, i, i, i));
  printf("m_ret =%d\n", ft_printf("le mien : >%p< >%p< >%20p< >%-25p<", 0, i, i, i));
}
