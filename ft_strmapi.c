/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:53:39 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/13 15:43:55 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*t;
	unsigned int	i;

	i = 0;
	if ((t = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) == NULL)
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			t[i] = f(i, s[i]);
			i++;
		}
	}
	t[i] = '\0';
	return (t);
}
