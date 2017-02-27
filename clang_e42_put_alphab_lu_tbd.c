/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_000.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 17:45:34 by bazria            #+#    #+#             */
/*   Updated: 2016/09/20 17:47:33 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** display the alphabet characters alternatively uppercase and lowercase starting by aBcD...
*/

#include <unistd.h>

void	maff(void);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff(void)
{
	int	letter;

	letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter);
		if(letter % 2 == 1)
		{
			letter = letter - 31;
		}
		else
		{
			letter = letter + 33;
		}
	}
	ft_putchar('\n');
}

int	main(void)
{
	maff();
	return (0);
}
