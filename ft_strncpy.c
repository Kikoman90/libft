/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:15:27 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/02 19:04:42 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (dest && src)
	{
		ft_memset(dest, '\0', n);
		i = 0;
		while (n-- && src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
