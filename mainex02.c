/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:15:09 by charoua           #+#    #+#             */
/*   Updated: 2019/06/05 18:43:06 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);
 
int main(void)
{
	int i;
	int j;
	int *nbr1 = &i;
	int *nbr2 = &j;
	
	i = 5;
	j = 15;
	ft_swap(nbr1, nbr2);
	printf("i est egal a %d et j est egal a %d", i, j);
	return (0);
}
