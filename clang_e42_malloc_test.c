/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_013_day_07_ex00_malloc_test_program.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 13:53:05 by bazria            #+#    #+#             */
/*   Updated: 2016/09/08 18:52:26 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define LEN	42

int	main(void)
{
	int		index;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	index = 0;
	while (index < LEN)
	{
		str[index] = '0' + (index % 10);
		index = index + 1;
	}
	str[index] = '\0';
	ft_putstr(str);
	return (0);
}
