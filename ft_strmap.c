/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:19:54 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/07 15:39:37 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*t;
	unsigned int	i;

	i = 0;
	if ((t = (char *)malloc(sizeof(char) * sizeof(s) + 1)) == NULL)
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			t[i] = f(s[i]);
			i++;
		}
	}
	return (t);
}
