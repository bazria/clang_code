/**************************************************************************
*
* filename : e42_putaddr_02.c
* goal     : put address of variables of different types
* author   : bruno
* created  : 2016.12.11   17:23:03
* updated  : 2016.12.11   18:07:38
*
**************************************************************************/

#include <stdio.h>
#include <unistd.h>

void	ft_putaddr(void* address);
void	ft_putchar(char c);
void	ft_putstr(char *s);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putaddr(void* address)
{
/* cast the address into a void* and print it */
	printf("%p\n", (void*) address);
}

int		main(void)
{
	char				c;
	short				h;
	int					i;
	long				l;
	long long			o;
	unsigned long long	u;
	char				*s1 = NULL;
	char				*s2;

	s2 = "hello42";
	ft_putstr("address of char               = "); ft_putaddr(&c);
	ft_putstr("address of short              = "); ft_putaddr(&h);
	ft_putstr("address of int                = "); ft_putaddr(&i);
	ft_putstr("address of long               = "); ft_putaddr(&l);
	ft_putstr("address of long long          = "); ft_putaddr(&o);
	ft_putstr("address of unsigned long long = "); ft_putaddr(&u);
	ft_putstr("address of string null        = "); ft_putaddr(s1);
	ft_putstr("address of string hello42     = "); ft_putaddr(s2);
	return (0);
}
