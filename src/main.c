#include "../includes/lol.h"
#include "limits.h"

int		strcheck(char *str, char *check);
int       main(void)
{
	unsigned long i;

	i = -42;

	ft_printf("|%lld|\n", -9223372036854775808);
	printf("|%lld|\n", -9223372036854775808);
	printf("___________\n");
	ft_printf("|%jd|\n", -9223372036854775808);
	printf("|%jd|\n", -9223372036854775808);
	printf("___________\n");
	ft_printf("|%lu|\n",i);
	printf("|%lu|\n", i);
	printf("___________\n");
	ft_printf("|%hU|\n", 4294967296);
	printf("|%hU|\n",4294967296);
	printf("___________\n");
	ft_printf("|%U|\n", 4294967296);
	printf("|%U|\n", 4294967296);
/*	printf("___________\n");
	ft_printf("@moulitest: |%5.x %5.0x|\n", 0, 0);
	printf("@moulitest: |%5.x %5.0x|\n", 0, 0);
	printf("___________\n");
	ft_printf("@moulitest: |%5.o %5.0o|\n", 0, 0);
	printf("@moulitest: |%5.o %5.0o|\n", 0, 0);
	printf("___________\n");
	ft_printf("@moulitest: |%5.d %5.0d|\n", 0, 0);
	printf("@moulitest: |%5.d %5.0d|\n", 0, 0);
	//printf("Val_mprintf = %d\n", ft_printf("@moulitest: %#.o %#.0o", 0, 0));
	//printf("Val_printf = %d\n", printf("@moulitest: %#.o %#.0o", 0, 0));
	*/  return (0);
}
