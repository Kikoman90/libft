/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 13:34:37 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/08 12:12:16 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number(char const *s, char c)
{
	size_t	number;
	size_t	i;

	number = 0;
	i = 0;
	if (s[i] != c)
		number++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			number++;
		i++;
	}
	return (number);
}

static size_t	ft_size(char const *s, char c, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c)
	{
		i++;
		size++;
	}
	return (size);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dest;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	if ((dest = (char **)malloc(sizeof(char *) * ft_number(s, c) + 1)) == NULL)
		return (NULL);
	while (s[i] && j < ft_number(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if ((dest[j] = (char *)malloc(sizeof(char) * ft_size(s, c, i))) == NULL)
			return (NULL);
		while (s[i] != c && s[i])
			dest[j][k++] = s[i++];
		dest[j][k] = '\0';
		k = 0;
		j++;
	}
	dest[j] = NULL;
	return (dest);
}
