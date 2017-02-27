/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 20:03:16 by bazria            #+#    #+#             */
/*   Updated: 2016/09/15 20:36:46 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int	initial_number;

	initial_number = n;
	if (n < 0)
	{
		ft_putchar('-');
	}
	if (n == -65536)
	{
		ft_putchar('6');
		ft_putchar('5');
		ft_putchar('5');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('\n');
	}
	else
	{
		n = -n;
		ft_putchar('N');
	}

}

int		main(void)
{
	ft_putnbr(-65536);
	ft_putnbr(-65535);
	ft_putnbr(-1);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(65535);
	return (0);
}
