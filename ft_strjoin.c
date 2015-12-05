/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:03:36 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/05 15:58:02 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*t;
	unsigned int	j;

	j = 0;
	if ((t = (char *)malloc(sizeof(char) * (sizeof(s1) + sizeof(s2))\
				+ 1)) == NULL)
			return (NULL);
	while (*s1)
		t[j++] = *s1++;
	while (*s2)
		t[j++] = *s2++;
	t[j] = '\0';
	return (t);
}
