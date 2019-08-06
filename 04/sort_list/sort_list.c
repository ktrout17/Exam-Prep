/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 11:16:53 by ktrout            #+#    #+#             */
/*   Updated: 2019/08/06 11:11:12 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int 	overflow;
	t_list	*temp;

	temp = lst;
	while (lst->next != NULL)
	{
		if(((cmp)(lst->next, lst->data->next)))
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = temp;
		}
		else 
			lst = lst->next;
	}
	lst = temp;
	return (lst);
}
