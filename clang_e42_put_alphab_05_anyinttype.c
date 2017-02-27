/*******************************************************************************
*
* filename : e42pc_d02_01_ex00_main_print_alphabet_05_anyintegertype.c
* goal     : 
* author   : bruno
* created  : 2016.10.24   11:35:44
* updated  : 2016.10.24   11:44:58
*
*******************************************************************************/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_put_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_alphabet(void)
{
	char	letter;
/* letter can be of any integer type, from char to unsigned long long */

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar (letter);
		letter = letter + 1;
	}
}

int	main(void)
{
	ft_put_alphabet();
	return (0);
}
