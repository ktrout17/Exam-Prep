/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:48:13 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 19:48:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int p)
{
	char *str;

	str = "0123456789abcdef";
	if (p == 0)
		write(1, "0", 1);
	while (p)
	{
		write(1, &str[p % 16], 1);
		p = p / 16;
	}
}

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

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}