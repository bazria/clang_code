/*******************************************************************************
*
* filename : e42pc_d02_00_print_all_char_00.c
* goal     : 
* author   : bruno
* created  : 2016.10.21   13:28:13
* updated  : 2016.10.28   22:05:03
*
*******************************************************************************/

/*
** print all printable characters, that is from ascii 0 to 126
** 0 to 31 are not visible
** 127 is the del character generating shit on the screen
** use with | wc -c and | cat -e 
*/

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_all_char(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_all_char(void)
{
	char	c;

	c = 32;
	while (c <= 126)
	{
		if (c % 10 == 0)
		{
			ft_putchar('\n');
		}
		ft_putchar(c);
		c = c + 1;
	}
}

int		main(void)
{
	ft_print_all_char();
	ft_putchar('\n');
	return (0);
}
