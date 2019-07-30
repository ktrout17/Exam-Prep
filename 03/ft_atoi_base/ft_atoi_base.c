/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 08:37:35 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/30 17:56:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbr_inbase(char c , int base)
{
	if (base >= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= 9) || (c <= 'A' && c <= ('A' + base - 10)) ||
			(c >= 'a' && c <= ('a' + base - 10)));
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int nbr;
	int neg;

	if (!str[0] || (str_base < 2 || str_base > 16))
		return (0);
	i = 0;
	nbr = 0;
	neg = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\r' || str[i] == '\v' ||
			str[i] == '\n' || str[i] == ' '))
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && nbr_inbase(str[i], str_base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			nbr = (nbr * str_base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr = (nbr * str_base) + ( str[i] - 'a' + 10);
		else 
			nbr = (nbr * str_base) + (str[i] - '0');
		i++;
	}
	return (nbr * neg);
}