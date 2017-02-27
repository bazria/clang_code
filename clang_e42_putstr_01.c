/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
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
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

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

int		main(void)
{
	ft_putstr("Hello, Dude!");
	ft_putchar('\n');
	return (0);
}
