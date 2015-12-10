/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:09:03 by fsidler           #+#    #+#             */
/*   Updated: 2015/12/09 17:24:56 by fsidler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if ((new = (t_list *)malloc(sizeof(lst))) == NULL)
		return (NULL);
	while (lst)
	{
		if ((new->content = (void *)malloc(sizeof(f(lst)->content))) == NULL)
			return (NULL);
		new = f(lst);
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
