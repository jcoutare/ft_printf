#include "../includes/lol.h"
#include "limits.h"

int		strcheck(char *str, char *check);
int       main(void)
{
	unsigned long i;

	i = 4294967296;

	ft_printf("|%hU|\n", i);
	printf("|%hU|\n", i);
	printf("___________\n");
	ft_printf("|%hx|\n", 4294967296);
	printf("|%hx|\n", 4294967296);
	printf("___________\n");
	ft_printf("|%u|\n", -1);
	printf("|%u|\n", -1);

	printf("___________\n");
	ft_printf("|%lu|\n",i);
	printf("|%lu|\n", i);
	printf("___________\n");
	ft_printf("|%hhX|\n", 4294967296);
	printf("|%hhx|\n",4294967296);
	printf("___________\n");
	ft_printf("@moulitest: |%5.x %5.0x|\n", 0, 0);
	printf("@moulitest: |%5.x %5.0x|\n", 0, 0);
	printf("___________\n");
	ft_printf("@moulitest: |%5.o %5.0o|\n", 0, 0);
	printf("@moulitest: |%5.o %5.0o|\n", 0, 0);
	printf("___________\n");
	ft_printf("@moulitest: |%5.d %5.0d|\n", 0, 0);
	printf("@moulitest: |%5.d %5.0d|\n", 0, 0);
	printf("Val_mprintf = %d\n", ft_printf("@moulitest: %#.o %#.0o", 0, 0));
	while (1);
	return (0);
}
