/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:12:27 by charoua           #+#    #+#             */
/*   Updated: 2019/06/05 19:21:27 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int i;
	int j;
	int *nbr1 = &i;
	int *nbr2 = &j;

	i = 23;
	j = 5;
	ft_ultimate_div_mod(nbr1, nbr2);
	printf("le resultat de la div est %d et le resultat du mod est egal a %d", i, j);
	return (0);
}
