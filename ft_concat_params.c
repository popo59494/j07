/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 18:35:36 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/23 22:01:03 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_strcat_last(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		length;
	int		i;
	int		j;

	i = 1;
	j = 1;
	length = 0;
	while (i < argc)
	{
		length = length + ft_strlen(argv[i]);
		i++;
	}
	str = (char*)malloc(sizeof(char) * (length) + (argc - 1));
	while (j < argc - 1)
	{
		str = ft_strcat(str, argv[j]);
		j++;
	}
	if (j == argc - 1)
		str = ft_strcat_last(str, argv[j]);
	printf("%c", str[length + argc - 1]);
	return (str);
}


int main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return 0;
}
