/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:09:43 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 18:09:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int i;
	int *range;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else 
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = start;
		if (start > end)
			start = start - 1;
		else 
			start++;
	}
	range[i] = start;
	return (0);
}