#include "../includes/lol.h"

int		main(void)
{
	char str[] = "wesh bien";
	int i = 0;

	while (str < ft_strchr(str, ' '))
		ft_putchar(str[i++]);
	return (0);
}

/*JEAN-POUBELLE
	void (*flag_tab[127])(char);

	flag_tab['c'] = &ft_putchar;
	flag_tab['d'] = &ft_putshlag;
	char lol = 'd';
	flag_tab[99](lol);
	flag_tab[lol](lol);
*/
