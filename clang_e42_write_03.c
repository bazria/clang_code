/*******************************************************************************
*
* filename : e42pc_d02_00_write_03.c
* goal     : 
* author   : bruno
* created  : 2016.10.26   19:43:49
* updated  : 2016.10.26   19:58:41
*
*******************************************************************************/

#include <unistd.h>

void	write0(void);

void	write1(void);

void	write2(void);

void	write3(void);

void	write0(void)
{
	write(1, "\n", 1);
}

void	write1(void)
{
	write(1, "@", 1);
}

void	write2(void)
{
	write(1, "@\n", 2);
}

void	write3(void)
{
	unsigned long long	c;
 
	c = 'a';
	write(1, &c, 2);
	write(1, "string", 6);
}

int	main(void)
{
	write1();
	write0();
	write2();
	write0();
	write3();
	write0();
	return (0);
}
