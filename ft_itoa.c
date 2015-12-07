/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:35:58 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/07 17:41:24 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned		i;
	int				j;
	char			*str;

	i = 0;
	j = n;
	if (n < 0)
		i++;
	while (j /= 10)
		i++;
	if ((str = (char *)malloc(sizeof(char) * ++i)) == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i--] = '\0';
	str[i--] = (n % 10) + '0';
	while (n /= 10)
		str[i--] = (n % 10) + '0';
	return (str);
}
