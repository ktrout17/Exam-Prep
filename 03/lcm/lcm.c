/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:21:42 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 19:21:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned i;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		i = a;
	else 
		i = b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			break ;
		i++;
	}
	return (i);
}

int		main(void)
{
	printf("%d", lcm(9, 18));
	return (0);
}