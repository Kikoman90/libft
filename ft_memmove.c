/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:02:49 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/04 16:11:28 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*t;

	i = 0;
	if ((t = (char *)malloc(sizeof(char) * ft_strlen((char *)src) + 1)) == NULL)
		return (NULL);
	while (((char *)src)[i])
	{
		t[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)t)[i];
		i++;
	}
	return (dest);
}
