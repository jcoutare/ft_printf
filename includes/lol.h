/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:19:43 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/06 18:04:54 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LOL_H
# define LOL_H
# include "../libft/libft.h"
# include <stdarg.h>

typedef union mon_union
{
    int i;
    double d;
    char *str;
}			the_union;

typedef struct t_struct
{
	int neg;
	int plus;
	int space;
	int diese;
	int largeur;
	int olargeur;
	int starlarg;
	int doto;
	int dotprec;
	int starprec;

	int len;
	void (*flag_tab[127])(va_list ap, struct t_struct *lol);
}				s_struct;

int     strichr(char *str, char c);
int     strichr_str(char *str, char *chr);
char *ft_itoa_base(unsigned int nbr, int base);
s_struct	*fill_struct(s_struct *lol);
void    flag_d_signed(va_list ap, s_struct *lol);
void    flag_d_unsigned(va_list ap, s_struct *lol);
void    flag_o_unsigned(va_list ap, s_struct *lol);
void    flag_o_unsigned(va_list ap, s_struct *lol);
void    flag_hex_unsigned(va_list ap, s_struct *lol);
void    flag_hex_unsigned_maj(va_list ap, s_struct *lol);
void    flag_s(va_list ap, s_struct *lol);
void    flag_c(va_list ap, s_struct *lol);
#endif
