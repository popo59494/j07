/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:10:05 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/16 19:38:08 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int *str;
	int i;

	i = 1;
	str = (char*)malloc(sizeof(char) * (**argv - *argv[0]);
	while (i <= argc)
	{
		str = argv[i] + '\n';
		i++;
	}
	return (str);
}
