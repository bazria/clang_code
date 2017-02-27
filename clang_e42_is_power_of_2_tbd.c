/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 11:20:17 by exam              #+#    #+#             */
/*   Updated: 2016/12/06 12:20:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n);

int	is_power_of_2(unsigned int n)
{
	unsigned int power_of_2;

	power_of_2  = 1;
	/* compute the power of 2 that is greater than or equal to n */
	while (power_of_2 < n)
	{
		power_of_2 = power_of_2 * 2;
	}
	/* if that power of 2 is equal to n, then n is a power of 2 */
	if (power_of_2 == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d", 0);
	printf("%d\n", is_power_of_2(0));
	printf("%d", 1);
	printf("%d\n", is_power_of_2(1));
	printf("%d", 2);
	printf("%d\n", is_power_of_2(2));
	printf("%d", 3);
	printf("%d\n", is_power_of_2(3));
	printf("%d", 4);
	printf("%d\n", is_power_of_2(4));
	printf("%d", 5);
	printf("%d\n", is_power_of_2(5));
	printf("%d", 8);
	printf("%d\n", is_power_of_2(8));
	printf("%d", 65535);
	printf("%d\n", is_power_of_2(65535));
	printf("%d", 65536);
	printf("%d\n", is_power_of_2(65536));
	return (0);
}
