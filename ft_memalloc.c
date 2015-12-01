/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:04:18 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/01 13:51:58 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*dest;
	size_t			i;

	i = 0;
	if ((dest = (void *)malloc(sizeof(void) * size + 1)) == NULL)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)dest)[i] = 0;
		i++;
	}
	return (dest);
}
