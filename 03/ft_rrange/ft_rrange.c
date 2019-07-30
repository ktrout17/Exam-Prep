/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:35:39 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 18:35:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int i;
	int *rrange;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else 
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i++] = end;
		if (start > end)
			end++;
		else 
			end--;
	}
	rrange[i] = end;
	return (0);
}