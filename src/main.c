#include "../includes/ft_printf.h"
#include "limits.h"

int       main(void)
{
	int i = USHRT_MAX;


	printf("%d\n", ft_printf("%.o, %.0o\n", 0, 0));
	printf("%d\n", printf("%.o, %.0o\n", 0, 0));
	printf("%d\n", ft_printf("%5.o, %5.0o\n", 0, 0));
	printf("%d\n", printf("%5.o, %5.0o\n", 0, 0));
	printf("%d\n", ft_printf("%#.o, %#.0o\n", 0, 0));
	printf("%d\n", printf("%#.o, %#.0o\n", 0, 0));
	printf("%d\n", ft_printf("%#o\n", 0));
	printf("%d\n", printf("%#o\n", 0));

	return (0);
}
