/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:13:40 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/16 18:05:05 by apogorze         ###   ########.fr       */
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
	if (max <= min)
		return (0);
	while (i < max - min)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
