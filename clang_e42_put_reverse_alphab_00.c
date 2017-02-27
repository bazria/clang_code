/*******************************************************************************
*
* filename : e42pc_d02_01_ex01_main_print_reverse_alphabet_00_char.c
* goal     : 
* author   : bruno
* created  : 2016.10.20   16:10:59
* updated  : 2016.10.20   16:18:57
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar (c);
		c = c - 1;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
