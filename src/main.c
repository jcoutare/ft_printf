#include "../includes/ft_printf.h"
#include "limits.h"

int       main(void)
{
	printf("%d\n", ft_printf("{%3c}\n", 0));
	printf("%d\n", printf("{%3c}\n", 0));
	return (0);
}
