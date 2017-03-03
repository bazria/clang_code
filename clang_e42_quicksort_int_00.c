/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clang_e42_quicksort_int_01.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 17:21:08 by bazria            #+#    #+#             */
/*   Updated: 2017/03/03 18:28:47 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int table[], int index1, int index2);
void	quickSort(int table[], int debut, int fin);

void	swap(int table[], int index1, int index2)
{
	int	initial_value;

    initial_value = table[index1];
    table[index1] = table[index2];
    table[index2] = initial_value;
}

void	quickSort(int table[], int debut, int fin)
{
    int gauche;
    int droite;
    int pivot;

    gauche = debut - 1;
    droite = fin + 1;
    pivot = table[debut];

    /* si la table est de longueur nulle, il n'y a rien à faire */
    if (debut >= fin)
	{
        return;
	}

    /* sinon, on parcourt la table, une fois de droite a gauche, et une fois de gauche a droite, */
	/* a la recherche d'éléments mal places, que l'on permute. Si les deux parcours se croisent, on arrete. */
    while(1)
	{
		do droite--; while(table[droite] > pivot);
		do gauche++; while(table[gauche] < pivot);
		if (gauche < droite)
			swap(table, gauche, droite);
		else break;
	}
	/* maintenant, tous les elements inferieurs au pivot sont avant ceux superieurs au pivot */
	/* On a donc deux groupes de cases à trier. On utilise pour cela... la méthode quickSort elle-même ! */
	quickSort(table, debut, droite);
	quickSort(table, droite+1, fin);
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
	printf("%s", "\n");
	quickSort(table, 0, 9);
	i = 0;
	while (i < 10)
	{
		printf("%d", table[i]); printf("%s", " ");
		i++;
	}
	printf("%s", "\n");
	return (0);
}
