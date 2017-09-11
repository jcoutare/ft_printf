#include "../includes/lol.h"
#include <stdio.h>

int		main(void)
{
	char str[] = "wesh ql%";
	char *dst;

	dst = cpy_until_c(str, '%');
	ft_putstr(dst);
}

/*JEAN-POUBELLE
*/
