/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:57:21 by ktrout            #+#    #+#             */
/*   Updated: 2019/08/01 16:11:41 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int i;
	int n;

	if (argc == 2)
	{	
		i = 1;
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (n >= ++i)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n == i)
					break ;
				printf("*");
				n = n / i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}