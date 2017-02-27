/*******************************************************************************
*
* filename : e42pc_d02_01_ex00_main_print_alphabet_03_literally.c
* goal     : 
* author   : bruno
* created  : 2016.10.24   11:49:11
* updated  : 2016.10.24   11:50:06
*
*******************************************************************************/

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
