/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:21:04 by bazria            #+#    #+#             */
/*   Updated: 2016/11/15 21:29:11 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tbd todelete
*/
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb > 1)
	{
		while (nb > 1)
		{
			factorial = factorial * nb;
			nb--;
		}
		return (factorial);
	}
	else
	{
		if (nb == 0 || nb == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

int	main(void)
{
	printf("%d\n", -99999);
	printf("%d\n", ft_iterative_factorial(-99999));
	printf("%d\n", -1);
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", 0);
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", 1);
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", 2);
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", 9);
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", 19);
	printf("%d\n", ft_iterative_factorial(19));
	printf("%d\n", 25);
	printf("%d\n", ft_iterative_factorial(25));
	return (0);
}
