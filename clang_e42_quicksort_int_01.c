/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clang_e42_quicksort_int_01.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 17:21:08 by bazria            #+#    #+#             */
/*   Updated: 2017/02/17 18:45:34 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* near-original as it appears in openclassrooms */

#include <stdio.h>

void	swap(int table[], int index1, int index2);
void	quick_sort(int table[], int index_begin, int index_end);

void	swap(int table[], int index1, int index2)
{
	int	initial_value_index1;

	initial_value_index1 = table[index1];
	table[index1] = table[index2];
	table[index2] = initial_value_index1;
}

void	quick_sort(int table[], int index_begin, int index_end)
{
	int	index_scan_left;
	int index_scan_right;
	int pivot_value;

	index_scan_left = index_begin;
	index_scan_right = index_end;
	pivot_value = table[index_begin];
	/* if there is something to sort */
	if (index_begin < index_end)
	{
		/* scan table from left to right and from right to left for unsorted items */
		while ((table[index_scan_right] > pivot_value) && (table[index_scan_left] < pivot_value))
		{
			index_scan_right--;
			index_scan_left++;
			/* swap unsorted items */
			if (index_scan_left < index_scan_right)
			{
				swap(table, index_scan_left, index_scan_right);
			}
		}
		/* all elements lower than pivot are before all elements greater than pivot */
		/* sort lower elements*/
		quick_sort(table, index_begin, index_scan_right);
		/* sort greater elements */
		quick_sort(table, index_scan_right + 1, index_end);
	}
	printf("%s", "\n");
	printf("%d", table[index_begin]); printf("%s", "     "); printf("%d", table[index_end]);
	printf("%s", "\n");

	
}

int		main(void)
{
	int	table[10] = {0, 9, 9, 8, 3, 7, 1, 5, 4, 2};
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d", table[i]); printf("%s", " ");
		i++;
	}
	quick_sort(table, 0, 9);
	i = 0;
	while (i < 10)
	{
		printf("%d", table[i]); printf("%s", " ");
		i++;
	}
	return (0);
}
