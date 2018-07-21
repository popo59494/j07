/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:41:16 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/22 01:56:47 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int nbvalues;
	int i;
	
	i = 0;
	nbvalues = max - min;
	*range = (int*)malloc(sizeof(int) * (nbvalues));
	if (*range == NULL)
		return (0);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
