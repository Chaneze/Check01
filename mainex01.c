/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:07:35 by charoua           #+#    #+#             */
/*   Updated: 2019/06/06 08:57:34 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int i = 5;
	int *nbr =  &i;
	int **nbr1 = &nbr;
	int ***nbr2 = &nbr1;
	int ****nbr3 = &nbr2;
	int *****nbr4 = &nbr3;
	int ******nbr5 = &nbr4;
	int *******nbr6 = &nbr5;
	int ********nbr7 = &nbr6;
	int *********nbr8 = &nbr7;

	i = 5;
	printf("%d\n", *********nbr8);
	ft_ultimate_ft(nbr8);
	printf("%d", *********nbr8);
	return (0);
}
