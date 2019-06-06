/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:39:22 by charoua           #+#    #+#             */
/*   Updated: 2019/06/05 19:52:25 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	(void)argc;
	int i;

	i = ft_strlen(argv[1]);
	printf("la chaine contient %d caractere", i);
	return (0);
}
