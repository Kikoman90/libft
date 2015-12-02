/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:44:52 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/02 18:01:41 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> //retirer
#include <string.h> //retirer

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	l;
	size_t	p;
	size_t	j;

	i = 0;
	p = 0;
	l = 0;
	j = 0;
	while (src[l])
		l++;
	while (dest[i] != 0)
		i++;
	while (dest[p])
		p++;
	if (n > p + l)
		n = p + l;
	while (n < p + l && j < l)
	{
		if (n < p + l && j < l && n + i < p)
			dest[i] = src[j];
		i++;
		j++;
		n++;
	}
	//dest[n + i] = '\0';
	return (n);
}

/*int		main(void)
{
	char buf1[10] = "abc";
	char buf2[10] = "abc";
	printf("%lu | %lu\n", ft_strlcat(buf1, "abcdefghijklmnop", 10), strlcat(buf2, "abcdefhgijklmnop", 10));
	printf("%s\n", buf1);
	printf("%s", buf2);
	return (0);
}*/
