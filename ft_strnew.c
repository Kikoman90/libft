/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:36:49 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/05 15:00:08 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dest;

	if ((dest = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	while (size--)
		dest[size] = '\0';
	return (dest);
}
