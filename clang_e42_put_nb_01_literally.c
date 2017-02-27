/*******************************************************************************
*
* filename : e42pc_d02_01_ex02_main_print_numbers_01_literally.c
* goal     : 
* author   : bruno
* created  : 2016.10.26   18:40:05
* updated  : 2016.10.26   18:45:31
*
*******************************************************************************/

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
