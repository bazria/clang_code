/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
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

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while ((sqrt * sqrt) < nb)
	{
		sqrt++;
	}
	if ((sqrt * sqrt) == nb)
	{
		return (sqrt);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d\n", -999999);
	printf("%d\n", ft_sqrt(-999999));
	printf("%d\n", -1);
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", 0);
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", 1);
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", 2);
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", 3);
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", 4);
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", 625);
	printf("%d\n", ft_sqrt(625));
	printf("%d\n", 626);
	printf("%d\n", ft_sqrt(626));
	printf("%d\n", 99980001);
	printf("%d\n", ft_sqrt(99980001));
}
