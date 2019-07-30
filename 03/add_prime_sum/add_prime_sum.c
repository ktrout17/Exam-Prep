/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:03:47 by marvin            #+#    #+#             */
/*   Updated: 2019/07/23 20:03:47 by marvin           ###   ########.fr       */
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
	while ((str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\n'
			|| str[i] == ' ') && str[i])
			i++;
	if (str[i] == '+' || str[i] == '-')
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

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	else if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else 
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		isprime(int n)
{
	int i;

	if (n < 2)
		return (0);
	i = 2;
	while ((i * i) <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int n;
	int sum;

	if (argc ==2)
	{
		n = ft_atoi(argv[1]);
		sum = 0;
		while (n > 0)
		{
			if (isprime(n--))
				sum = sum + (n + 1);
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 2);
	return (0);
}