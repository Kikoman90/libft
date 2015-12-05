/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 14:36:36 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/05 16:08:44 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*t;
	unsigned int	i;

	i = 0;
	if((t = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (len != 0 && s[start])
	{
		t[i++] = s[start++];
		len--;
	}
	return (t);
}
