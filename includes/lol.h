/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lol.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoutare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:19:43 by jcoutare          #+#    #+#             */
/*   Updated: 2017/09/20 14:50:56 by jcoutare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LOL_H
# define LOL_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h> // < jean michel l'arnaque
# include <sys/types.h>

typedef union mon_union
{
    int i;
    double d;
    char *str;
}			the_union;

typedef struct s_struct
{
	int modif;
	int modif_l;
	int modif_ll;
	int modif_h;
	int modif_hh;
	int modif_j;
	int modif_z;
	int f_sharp;
	int f_zero;
	int f_plus;
	int f_moins;
	int f_space;
	int conv;
	int larg;
	int prec;
	char *sarg;
	unsigned long long arg;
	va_list *ap;
	char *flags;
	char *resolved;
	char *fstring;
	void (*flag_tab[127])(struct s_struct *data);
}				t_struct;

int		ft_printf(char *str,...);
void	make_zero(t_struct *data);
void	make_moins(t_struct *data);
void	prec(t_struct *data);
void	modif_l(t_struct *data);
void	modif_h(t_struct *data);
void	modif_j(t_struct *data);
void	modif_z(t_struct *data);
void    make_sharp(t_struct *data);
int     flag_prec(t_struct *data, char *flags);
void    larg_moins(t_struct *data);
char    *ft_strnjoin(char const *s1, char const *s2, int n);
int     strichr(char *str, char c);
int     strichr_str(char *str, char *chr);
char	*ft_itoa_base(unsigned long long nbr, unsigned int base);
t_struct	*fill_struct(t_struct *data, va_list *ap);
void	larg(t_struct *data);
void	flag_pourcent(t_struct *data);
void	flag_zero(t_struct *data);
int		flag_larg(t_struct *data, char *flags);
void    flag_moins(t_struct *data);
void    flag_p(t_struct *data);
void	flag_plus(t_struct *data);
void	flag_space(t_struct *data);
void	flag_diese(t_struct *data);
void    flag_d_signed(t_struct *data);
void    flag_d_unsigned(t_struct *data);
void    flag_o_unsigned(t_struct *data);
void    flag_o_unsigned(t_struct *data);
void    flag_hex_unsigned(t_struct *data);
void    flag_hex_unsigned_maj(t_struct *data);
void    flag_s(t_struct *data);
void    flag_c(t_struct *data);
#endif
