/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:45:15 by charoua           #+#    #+#             */
/*   Updated: 2019/06/05 19:07:41 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int i;
	int j;
	int k;
	int h;
	int *nbr1 = &i;
	int *nbr2 = &j;

	i = 0;
	j = 0;
	k = 16;
	h = 5;
	ft_div_mod(k, h, nbr1, nbr2);
	printf("le resultat de la div est %d et le resultat du mod est egal a %d", i, j);
	return (0);
}
