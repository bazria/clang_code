/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_011_string_manipulation.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:14:24 by bazria            #+#    #+#             */
/*   Updated: 2016/09/06 20:47:07 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** tbd replace by another mechanism
** test_string = "Hello, world";
** write a function that assigns characters to a string
*/

/*
** function prototype
*/

int		ft_putchar(char c);
int		ft_putstr(char s[]);
int		replace_first_char_by_y(char *s);
int		replace_first_source_by_first_target(char *source, char *target);
int		assign_value_to_string(char *value, char *string);

/*
** function body
*/

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr1(char s[])
{
	int		index;
	char	string_terminator;

	string_terminator = '\0';
	index = 0;
	while (s[index] != string_terminator)
	{
		ft_putchar(s[index]);
		index = index + 1;
	}
	return (0);
}

int		ft_putstr2(char *s)
{
	int		index;
	char	string_terminator;

	string_terminator = '\0';
	index = 0;
	while (s[index] != string_terminator)
	{
		ft_putchar(s[index]);
		index = index + 1;
	}
	return (0);
}

int		replace_first_char_by_y(char *s)
{
	s[0] = 'Y';
	return (0);
}

int		replace_first_source_by_first_target(char *source, char *target)
{
	source[0] = target[0];
	return (0);
}

int		assign_value_to_string(char *value, char *string)
{
	int		index;
	int		nb_char;
	char	string_terminator;


	/* find the number of characters of the value */
	string_terminator = '\0';
	index = 0;
	nb_char = 0;
	while (value[index] != string_terminator)
	{
		nb_char = nb_char + 1;
	}
	nb_char = index;
	index = 0;
	while()
	{
		string[index] = value[index];
		index = index + 1;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
}

int		main(void)
{
	char	test_string[13];
	char	source[4] = "abc\0";
	char	target[5] = "defg\0";
	int		index;

	ft_putstr1(test_string);
	ft_putchar('\n');
	index = 0;
	while (index <= 11)
	{
		test_string[index] = 'a';
		index = index + 1;
	}
	test_string[12] = '\0';
	ft_putstr1(test_string);
	ft_putchar('\n');
	replace_first_char_by_y(test_string);
	ft_putstr1(test_string);
	ft_putchar('\n');
	ft_putstr1(source);
	ft_putchar('\n');
	ft_putstr1(target);
	ft_putchar('\n');
	replace_first_source_by_first_target(source, target);
	ft_putstr1(source);
	ft_putchar('\n');
	ft_putstr1(target);
	ft_putchar('\n');
	return (0);
}
