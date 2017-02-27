/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:21:04 by bazria            #+#    #+#             */
/*   Updated: 2016/11/15 21:29:11 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** increment the length from 0 until meeting the end-of-string character
*/
/*
** tbd todelete
*/
#include <stdio.h>

int		ft_strlen(char *str);

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int		main(void)
{
	int length;
	length = ft_strlen("Hello, Dude!");
	printf("%d\n", length);
	length = ft_strlen("");
	printf("%d\n", length);
	length = ft_strlen("1");
	printf("%d\n", length);
	return (0);
}
