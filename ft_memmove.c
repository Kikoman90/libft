/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 18:54:35 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/13 18:57:19 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*tmp;

	i = 0;
	if ((tmp = (UC *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	while (i < len)
	{
		((UC *)tmp)[i] = ((UC *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((UC *)dst)[i] = ((UC *)tmp)[i];
		i++;
	}
	return (dst);
}
