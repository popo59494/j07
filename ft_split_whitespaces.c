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

int		ft_count_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		j++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		i++;
	}
	return (j);
}

int		ft_count_letters(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

void	ft_wordcopy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split_whitespaces(char *str)
{
	char **tableau;
	int i;
	int j;
	int nw;
	int nl;

	i = 0;
	j = 0;
	nw = ft_count_words(str);
	tableau = (char**)malloc(sizeof(char*) * (nw + 1));
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
			i++;
		nl = ft_count_letters(&str[i]);
		tableau[j] = (char*)malloc(sizeof(char) * (nl + 1));
		ft_wordcopy(tableau[j], &str[i], nl);
		i = i + nl;
		j++;
	}
	tableau[j] = NULL;
	return (tableau);
}

int		main(void)
{
	char str[] = "  ncoewih  ifueh bifeu wg efuyg njerihf    fehg";
	int i;
	char **tableau;
	
	tableau = ft_split_whitespaces(str);
	while (tableau[i] != NULL)
	{
		printf("%s\n", tableau[i]);
		i++;
	}
	printf("%s", tableau[i]);
	return(0);
}
