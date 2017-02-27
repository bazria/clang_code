/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clang_e42_quicksort_int_01.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 17:21:08 by bazria            #+#    #+#             */
/*   Updated: 2017/02/17 18:49:44 by bazria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* original as it appears in openclassrooms */

#include <stdio.h>

void echanger(int tableau[], int a, int b)
{
	    int temp = tableau[a];
		    tableau[a] = tableau[b];
			    tableau[b] = temp;
}

void quickSort(int tableau[], int debut, int fin)
{
	    int gauche = debut-1;
		    int droite = fin+1;
			    const int pivot = tableau[debut];

				    /* Si le tableau est de longueur nulle, il n'y a rien à faire. */
				    if(debut >= fin)
						        return;

					    /* Sinon, on parcourt le tableau, une fois de droite à gauche, et une
						 *        autre de gauche à droite, à la recherche d'éléments mal placés,
						 *               que l'on permute. Si les deux parcours se croisent, on arrête. */
					    while(1)
							    {
									        do droite--; while(tableau[droite] > pivot);
											        do gauche++; while(tableau[gauche] < pivot);

													        if(gauche < droite)
																            echanger(tableau, gauche, droite);
															        else break;
																	    }

						    /* Maintenant, tous les éléments inférieurs au pivot sont avant ceux
							 *        supérieurs au pivot. On a donc deux groupes de cases à trier. On utilise
							 *               pour cela... la méthode quickSort elle-même ! */
						    quickSort(tableau, debut, droite);
							    quickSort(tableau, droite+1, fin);
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
	quickSort(table, 0, 9);
	i = 0;
	while (i < 10)
	{
		printf("%d", table[i]); printf("%s", " ");
		i++;
	}
	return (0);
}
