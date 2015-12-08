/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:53:39 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/07 15:39:32 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			t[i] = f(i, s[i]);
			i++;
		}
	}
	return (t);
}
