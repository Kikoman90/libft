/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:36:49 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/13 15:48:53 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dest;

	if ((dest = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	while (size + 1)
		dest[size--] = '\0';
	return (dest);
}
