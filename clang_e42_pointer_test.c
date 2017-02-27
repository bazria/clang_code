/**************************************************************************
*
* filename : e42_pointer_test.c
* goal     : understand pointers
* author   : bruno
* created  : 2016.11.26   17:53:35
* updated  : 2016.12.12   22:22:40
*
**************************************************************************/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putaddr(void *a_address);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putaddr(void *a_address)
{
	printf("%p\n", (void*) a_address);
}

int		main(void)
{
	int		i;
	char	c;
	char	*p_char;
	int		*p_int;
	int		**pp_int;
	int		***ppp_int;
	int		****pppp_int;
	int		*****ppppp_int;

	i = 1;
	c = 'b';
	p_int = &i;
	p_char = &c;
	pp_int = &(p_int);
	ppp_int = &(pp_int);
	pppp_int = &(ppp_int);
	ppppp_int = &(pppp_int);

	ft_putstr("p_int           = "); ft_putaddr(p_int);
	ft_putstr("p_int by &      = "); ft_putaddr(&i);
	ft_putstr("p_char          = "); ft_putaddr(p_char);
	ft_putstr("p_char by &     = "); ft_putaddr(&c);
	ft_putstr("a of p_int      = "); ft_putaddr(&p_char);
	ft_putstr("a of p_char     = "); ft_putaddr(&p_int);
	ft_putstr("*p_int          = "); printf("%d\n", *p_int);
	ft_putstr("*p_char         = "); printf("%d\n", *p_char);
	ft_putstr("s p_char        = "); printf("%s\n", p_char);
	ft_putstr("putchar c       = "); ft_putchar(c);			ft_putchar('\n');
	ft_putstr("putchar *p_char = "); ft_putchar(*p_char);	ft_putchar('\n');
	ft_putstr("putstr &c       = "); ft_putstr(&c);			ft_putchar('\n');
	ft_putstr("putstr p_char   = "); ft_putstr(p_char);		ft_putchar('\n');
	i = 2;
	ft_putstr("*p_int          = "); printf("%d\n", *p_int);
	ft_putstr("**pp_int        = "); printf("%d\n", **pp_int);
	**pp_int = 3;
	ft_putstr("**pp_int        = "); printf("%d\n", **pp_int);
	*****ppppp_int = 4;
	ft_putstr("*****ppppp_int  = "); printf("%d\n", *****ppppp_int);
	return (0);
}
