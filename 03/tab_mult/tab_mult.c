/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:27:17 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 20:27:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int res;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\n'
			|| str[i] == ' ') && str[i])
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

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
	int i;
	int nbr;

	if (argc != 2)
		write(1, "\n", 1);
	else 
	{
		i = 1;
		nbr = ft_atoi(argv[1]);
		while (i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(nbr);
			write(1, " = ", 3);
			putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}