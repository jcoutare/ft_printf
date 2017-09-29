#include "../includes/ft_printf.h"
#include "limits.h"

int       main(void)
{
	printf("%d\n", ft_printf("%4.15s\n", "42 is the answer"));
	printf("%d\n", printf("%4.15s\n", "42 is the answer"));
	return (0);
}
