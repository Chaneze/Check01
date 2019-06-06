/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 20:52:43 by charoua           #+#    #+#             */
/*   Updated: 2019/06/06 08:26:40 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int     main(void)
{
	int tab[7];
	int i = 0;
	tab[0] = 9;
	tab[1] = 5;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 13;
	tab[5] = 5;
	tab[6] = 100;
	ft_sort_int_tab(tab, 7);
	while (i < 7)
	{
		printf("tab[%d] contient %d \n", i, tab[i]);
		i++;
	}
	return (0);
}
