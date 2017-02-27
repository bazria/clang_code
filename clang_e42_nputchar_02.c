/*******************************************************************************
*
* filename : e42pc_d02_00_nputchar_02.c
* goal     : 
* author   : bruno
* created  : 2016.10.24   15:33:03
* updated  : 2016.11.18   21:04:19
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_nputchar(char c, int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nputchar(char c, int n)
{
	while (n > 0)
	{
		ft_putchar (c);
		n = n - 1;
	}
}

int	main(void)
{
	ft_nputchar('a', 1);
	ft_putchar('\n');
	ft_nputchar('b', 2);
	ft_putchar('\n');
	ft_nputchar('e', 5);
	ft_putchar('\n');
	ft_nputchar('z', 26);
	ft_putchar('\n');
	return (0);
}
