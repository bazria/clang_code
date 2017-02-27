/*******************************************************************************
*
* filename : e42pc_d02_01_ex02_main_print_numbers.c
* goal     : 
* author   : bruno
* created  : 2016.10.20   21:43:03
* updated  : 2016.10.26   18:38:31
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		ft_putchar (digit);
		digit = digit + 1;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar ('\n');
	return (0);
}
