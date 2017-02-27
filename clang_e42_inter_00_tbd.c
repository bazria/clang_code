/*******************************************************************************
*
* filename : e42_inter_00.c
* goal     : 
* author   : bruno
* created  : 2016.11.29   21:42:48
* updated  : 2016.12.02   19:33:26
*
*******************************************************************************/

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	inter(char *s1, char *s2);

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

void	inter(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	duplicate;

	/* for each letter of the string 1 */
	i = 0;
	while (s1[i] != '\0')
	{
		/* for each letter of the string 2 */
		j = 0;
		while (s2[j] != '\0')
		{
			/* if the letter of the string 2 matches the letter of the string 1 */
			if (s2[j] == s1[i])
			{
				ft_putstr("i = ");
				printf("%d\n", i);
				ft_putstr("j = ");
				printf("%d\n", j);
				k = 0;
				duplicate = 'n';
				/* if the letter has not already been printed, print it */
				while ((k < i) && (duplicate == 'n'))
				{
					if (s1[k] == s1[i])
					{
						duplicate = 'y';
					}
				k++;
				}
				if (duplicate == 'n')
				{
					ft_putchar(s2[j]);
					ft_putchar('\n');
				}
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	ft_putchar('\n');
	return (0);
}
