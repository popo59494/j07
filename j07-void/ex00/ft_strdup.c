/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:40:30 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/16 16:05:40 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define LENGTH 6

char	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char*)malloc(sizeof(*src) * (LENGTH + 1));
	ft_strcpy(dest, src);
	return (dest);
}

int		main(void)
{
	char *src;
	char *dest;

	src = (char*)malloc(sizeof(*src) * (LENGTH + 1));
	src = "abcdef";
	dest = ft_strdup(src);
	printf("%s", dest);
	return (0);
}
