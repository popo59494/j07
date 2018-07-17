/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:41:16 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/16 19:00:35 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int nbvalues;
	int i;
	
	i = 0;
	nbvalues = max - min;
	*range = (int*)malloc(sizeof(int) * (nbvalues));
	if (max <= min)
		return ((*range)[0] = 0);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (**range);
}

int		main(void)
{
	int i;
	int *str;

	i = -1;
	ft_ultimate_range(&str, 1, 10);
	while (++i < 9)
		printf("\n%d\n", str[i]);
	return (0);
}
			

