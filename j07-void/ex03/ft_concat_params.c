/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:10:05 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/22 02:26:47 by clement          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
} 

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i+j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *str;
	int length;
	int i;
	int j;
	
	i = 1;
	j = 1;
	while (i < argc)
	{
		length = length + ft_strlen(argv[i]);
		i++;
	}
	str = (char*)malloc(sizeof(char) * length + 1);
	while (j < argc)
	{
		str = ft_strcat(str, argv[j]);
		j++;
	}
	return (str);
}
