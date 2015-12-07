/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:04:18 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/07 14:13:44 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*dest;

	if ((dest = (void *)malloc(size)) == NULL)
		return (NULL);
	while (size--)
		((UC *)dest)[size] = 0;
	return (dest);
}
