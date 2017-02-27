/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_015_day_12_file_manipulation.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 19:25:26 by bazria            #+#    #+#             */
/*   Updated: 2016/09/15 20:04:52 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <bruno.h>

int	main(void)
{
	int fd;

	fd = open("alph", O_RDONLY);
	ft_putnbr(fd);
	return (0);
}
