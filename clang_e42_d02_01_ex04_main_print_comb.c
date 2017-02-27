/*******************************************************************************
*
* filename : e42pc_d02_01_ex04_main_print_comb.c
* goal     : 
* author   : bruno
* created  : 2016.10.28   20:12:40
* updated  : 2016.10.28   21:53:00
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
/* scan all the range */
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
/* if the condition to print is met, print */
				if ((a < b) && (b < c))
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
/* if it is the last number 789, do not print the separator */
					if (!((a == '7') && (b == '8') && (c == '9')))
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
				c = c + 1;
			}
			b = b + 1;
			c = '0';
		}
		a = a + 1;
		b = '0';
		c = '0';
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
