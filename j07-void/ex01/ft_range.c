/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:13:40 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/22 01:43:52 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int nbvalues;
	int *str;
	int i;
	
	i = 0;
	nbvalues = max - min;
	str = (int*)malloc(sizeof(int) * (nbvalues));
	if (str == 0)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < max - min)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
