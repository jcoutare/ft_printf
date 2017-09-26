#include "../includes/lol.h"
#include "limits.h"

int		strcheck(char *str, char *check);
int       main(void)
{
	int i;

	i = 42;

	printf("mprintf = %d\n", ft_printf("@moulitest: %d %-d %+d %0d", 0, 0));
	printf("printf = %d\n", printf("@moulitest: %d %-d %+d %0d", 0, 0));
	//printf("Val_mprintf = %d\n", ft_printf("@moulitest: %#6o", 2500));
	//printf("Val_printf = %d\n", printf("@moulitest: %#6o", 2500));
	return (0);
}
