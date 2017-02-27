/*******************************************************************************
*
* filename : e42pc_d02_01_ex05_main_print_comb2.c
* goal     : 
* author   : bruno
* created  : 2016.10.29   03:33:09
* updated  : 2016.10.31   01:35:21
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
/* generate all the numbers */
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
/* if it is not the last number 98 99, print the separator */
					if (!((a == '9') && (b == '8') && (c == '9') && (d == '9')))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					d = d + 1;
				}
				c = c + 1;
				d = '0';
			}
			b = b + 1;
			c = a;
			d = b + 1;
		}
		a = a + 1;
		b = '0';
		c = a;
		d = b + 1;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
