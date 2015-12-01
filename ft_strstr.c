/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:24:09 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/01 13:57:46 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *total, const char *find)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find == NULL || *find == '\0')
		return ((char *)total);
	while (total[j])
	{
		while (total[j] && find[i] != total[j])
			j++;
		while (total[j] && find[i] == total[j])
		{
			i++;
			j++;
		}
		if (find[i] == '\0')
			return ((char *)(total + (j - i)));
		i = 0;
	}
	return (NULL);
}
