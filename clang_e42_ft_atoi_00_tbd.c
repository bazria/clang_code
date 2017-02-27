/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clang_e42_ft_atoi_00.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:43:33 by bazria            #+#    #+#             */
/*   Updated: 2017/02/20 19:55:12 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *p_char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *p_char)
{
    int i;
    int nbr;

    i = 0;
    nbr = 0;
    if (p_char[i] == '-')
        return (0);
    while (p_char[i] != '\0')
    {
        if (!(p_char[i] >= 48 && p_char[i] <= 57))
            return (0);
        nbr = nbr * 10;
        nbr = nbr + (p_char[i] - 48);
        i++;
    }
    return (nbr);
}

int		main(int argc, char **argv)
{
    if (argc == 2)
	{
        ft_atoi(argv[1]);
	}
    else
	{
        ft_putchar('0');
	}
    ft_putchar('\n');
    return (0);
}
