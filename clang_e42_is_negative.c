/*******************************************************************************
*
* filename : e42pc_d02_01_ex03_main_is_negative.c
* goal     : 
* author   : bruno
* created  : 2016.10.26   18:53:25
* updated  : 2016.10.28   18:48:07
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int	main(void)
{
/*
**	ft_is_negative(-2147483649);
** error: implicit conversion from 'long' to 'int' changes value from -2147483649 to 2147483647 
** overflow from the lowest value yields a compiler error
*/
	ft_is_negative(-2147483648);
	ft_is_negative(-1);
	ft_putchar('\n');
	ft_is_negative(-0);
	ft_is_negative(0);
	ft_is_negative(+0);
	ft_is_negative(+1);
	ft_is_negative(+2147483647);
/*
** but overflow from the highest value yields no compiler error but interprets as negative
*/
	ft_is_negative(+2147483648);
	ft_is_negative(+2147483649);
	ft_is_negative(+2147483650);
	ft_putchar('\n');
	return (0);
}
