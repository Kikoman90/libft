/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:44:52 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/01 13:55:46 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	l;
	size_t	p;

	p = 0;
	i = 0;
	l = 0;
	while (src[l])
		l++;
	while (dest[p])
		p++;
	if (n > p + l)
		n = p + l;
	else
	{
		while (i < l && n < p + l)
		{
			dest[n + i] = src[i];
			i++;
			n++;
		}
		dest[n + i] = '\0';
	}
	return (n);
}
