/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:02:13 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/08 13:41:07 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*t;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (j != -1)
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
	}
	j = j - i + 1;
	if ((t = (char *)malloc(sizeof(char) * j + 1)) == NULL)
		return (NULL);
	s = s + i;
	i = 0;
	while (i < j)
		t[i++] = *s++;
	t[i] = '\0';
	return (t);
}
