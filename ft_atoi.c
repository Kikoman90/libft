/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:35:20 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/02 14:35:39 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		r;

	r = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n' ||\
		str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		i++;
		s = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ' &&\
			str[i] != '	' && str[i] != '+' && str[i] != '-')
			return (0);
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (s * r);
}