/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:38:47 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 19:38:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	else if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else 
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
}

int		main(int argc, char **argv)
{
	*argv = 0;
	putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}