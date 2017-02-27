/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_012_day_06_ex00_library_test_program.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:07:49 by bazria            #+#    #+#             */
/*   Updated: 2016/09/07 19:05:52 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_swap(int *a, int *b);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index = index + 1;
	}
}

void	ft_swap(int *a, int *b)
{
	int	*initial_a;

	initial_a = a;
	a = b;
	b = initial_a;
}

int		ft_strlen(char *str)
{
	int strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen = strlen + 1;
	}
	return (strlen);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0')
	{
		while (s2[index] != '0')
		{
			if (s1[index] < s2[index])
			{
				return (-1);
			}
			else if (s1[index] > s2[index])
			{
				return (1);
			}
		}
		index = index + 1;
	}
	return (0);
}

int		main(void)
{
	int	n1;
	int	n2;
	int *pn1;
	int *pn2;
	int	sl;

	n1 = 2;
	n2 = 111;
	pn1 = &n1;
	pn2 = &n2;
	ft_putchar('a');
	ft_putchar('\n');
	ft_putstr("abcdefgh");
	ft_putchar('\n');
	ft_swap(pn1, pn2);
	sl = ft_strlen("abcdefghij");
	return (0);
}
