#include "../includes/lol.h"
#include "limits.h"

int       main(void)
{
    long i = LONG_MAX;
//  ft_printf("%ld\n", LONG_MAX);
//  printf("%ld\n", LONG_MAX);
/*    printf("[---------[%D]------]\n", 42);
	  / printf("--------[+]-------\n"); // c good
	  ft_printf("|FSTRING| = %+8.4d, %+12.6d|\n", 97, -97);
	  printf("|THEREAL| = %+8.4d, %+12.6d|\n", 97, -97);
	  ft_printf("|FSTRING| = %+8.4d, %+12.6d|\n", -97, 97);
	  printf("|THEREAL| = %+8.4d, %+12.6d|\n", -97, 97);
	  printf("--------[-]-------\n"); // c good
	  ft_printf("|FSTRING| = %-8.4d, %-12.6d|\n", 97, -97);
	  printf("|THEREAL| = %-8.4d, %-12.6d|\n", 97, -97);
	  ft_printf("|FSTRING| = %-8.4d, %-12.6d|\n", -97, 42);
	  printf("|THEREAL| = %-8.4d, %-12.6d|\n", -97, 42);
	  printf("--------[0]-------\n"); // c good
	  ft_printf("|FSTRING| =%08d|\n", 97);
	  printf("|THEREAL| =%08d|\n", 97);
	  ft_printf("|FSTRING| =%08d,%08.6d|\n",-97, -97);
	  printf("|THEREAL| =%08d,%08.6d|\n", -97, -97);
	  printf("--------[' ']-----\n");
	  ft_printf("|FSTRING| =% 5d|\n", 97);
	  printf("|THEREAL| =% 5d|\n", 97);
*/  ft_printf("|FSTRING| =% 5ld|\n", i);
    printf("|THEREAL| =% 5ld|\n", i);
/*    printf("\n[--------[%x]------]\n", 42);
	  printf("--------[#]-------\n");
	  ft_printf("|FSTRING| = %#10.6x|\n", 97);
	  printf("|THEREAL| = %#10.6x|\n", 97);
	  ft_printf("|FSTRING| = %#10.8x|\n", -97);
	  printf("|THEREAL| = %#10.8x|\n", -97);
	  printf("--------[0]-------\n");
	  ft_printf("|FSTRING| = %010.4x|\n", 97);
	  printf("|THEREAL| = %010.4x|\n", 97);
	  ft_printf("|FSTRING| = %010.2x|\n", -97);
	  printf("|THEREAL| = %010.2x|\n", -97);
	  printf("--------[-]-------\n");
	  ft_printf("|FSTRING| = %-10.0x|\n", 97);
	  printf("|THEREAL| = %-10.0x|\n", 97);
	  ft_printf("|FSTRING| = %-10.1x|\n", -97);
	  printf("|THEREAL| = %-10.1x|\n", -97);
	  printf("--------[]-------\n");
	  ft_printf("|FSTRING| = %#-10.0x|\n", 97);
	  printf("|THEREAL| = %#-10.0x|\n", 97);
*/    return (0);
}
