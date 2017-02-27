/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e42_ft_strcmp_01_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 19:31:28 by bazria            #+#    #+#             */
/*   Updated: 2017/01/05 19:14:35 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	/* scan the strings while they both not terminated and identical */
	while((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	/* upon first discrepancy, return the difference cast in return type */
	return ((int)(s1[i] - s2[i]));
}

int		main(void)
{
	int		i;
	int		j;
	char	*p_char[10];

	p_char[0] = "";
	p_char[1] = " ";
	p_char[2] = "  ";
	p_char[3] = "a";
	p_char[4] = "b";
	p_char[5] = "aa";
	p_char[6] = "ab";
	p_char[7] = "yz";
	p_char[8] = "aaa";
	p_char[9] = "aab";
	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			printf("%s", "i="); printf("%d", i); printf("%s", " j="); printf("%d", j); printf("%s", " "); 
			printf("%s", "strcmp   ="); printf("%d", strcmp(p_char[i], p_char[j])); printf("%s", " ");
			printf("%s", "ft_strcmp="); printf("%d", ft_strcmp(p_char[i], p_char[j])); printf("%s", " ");
			if (strcmp(p_char[i], p_char[j]) == ft_strcmp(p_char[i], p_char[j]))
			{
				printf("%s", " equal");
			}
			else
			{
				printf("%s", " diff");
			}
			printf("%s", "\n");
			j++;
		}
		i++;
	}
	printf("%s", "\n");
	return (0);
}
