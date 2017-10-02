#include "../includes/ft_printf.h"
#include "limits.h"

int       main(void)
{
	printf("%d\n", ft_printf("%4.15o\n", 4242));
	printf("%d\n", printf("%4.15o\n", 4242));
	printf("%d\n", ft_printf("%#o, %#.0o\n", 0, 0));
	printf("%d\n", printf("%#.o, %#.0o\n", 0, 0));
 	printf("%d\n", ft_printf("%.o, %.0o", 0, 0));
	printf("%d\n", printf("%.o, %.0o", 0, 0));
 	return (0);
}
