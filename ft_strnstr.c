/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:22:20 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/01 13:59:48 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *total, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n < ft_strlen(find))
		return (NULL);
	if (n > ft_strlen(find))
		n = ft_strlen(find);
	if (n == 0)
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
		if (i >= n)
			return ((char *)(total + (j - i)));
		i = 0;
	}
	return (NULL);
}
