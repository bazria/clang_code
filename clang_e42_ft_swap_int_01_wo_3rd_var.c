/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clang_e42_ft_swap_00.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 14:58:47 by bazria            #+#    #+#             */
/*   Updated: 2017/02/13 15:50:20 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b);

void	swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int		main(void)
{
	int int1;
	int int2;

	int1 = 222;
	int2 = 999;
	printf("%s\n", "Before swap");
	printf("%s", "   int1 = "); printf("%d\n", int1);
	printf("%s", "   int2 = "); printf("%d\n", int2);
	swap(&int1, &int2);
	printf("%s\n", "After swap");
	printf("%s", "   int1 = "); printf("%d\n", int1);
	printf("%s", "   int2 = "); printf("%d\n", int2);
	return (0);
}
