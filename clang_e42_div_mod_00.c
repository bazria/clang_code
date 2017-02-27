/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:42:39 by bazria            #+#    #+#             */
/*   Updated: 2016/11/15 20:13:05 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
/* write to the variable whose address is div the result of the integer division of a by b */
	*div = a / b;
/* write to the variable whose address is mod the remainder of the integer division of a by b */
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 7;
	b = 5;
	ft_div_mod(a, b, &c, &d);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}
