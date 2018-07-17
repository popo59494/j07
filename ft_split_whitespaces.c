/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:53:23 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/17 17:12:37 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	char **argv;

	i = 0;
	j = 0;
	k = 1;
	argv = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		while (str[i] > 32)
		{
			argv[k][j] = str[i];
			j++;
			i++;
		}
		argv[k][j] = '\0';
		argv[k] = (char*)malloc(sizeof(char) * j);
		j = 0;
		k++;
	}
	return (argv);
}

int		main(void)
{
	char *str;
	char **argv;
	int i;

	i = 1;
	str = (char*)malloc(sizeof(char) * 60);
	str = "nciefh cijebfhi efwij bhew ewiufh  ewf h";
	argv = ft_split_whitespaces(str);
	while (i < 8)
	{
		printf("%s", argv[i]);
		i++;
	}
	return(0);
}
