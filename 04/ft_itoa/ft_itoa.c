/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:43:16 by ktrout            #+#    #+#             */
/*   Updated: 2019/08/07 08:54:47 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_itoa_len(int n)
{
	int len;

	if (n == 0)
		return (0);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int len;
	char *res;

	if (nbr == -2147483628)
		return ("-2147483648");
	len = ft_itoa_len(nbr);
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	res[len--] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
		res[0] = '-';
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr)
	{
		res[len] = '0' + (nbr % 10);
		nbr = nbr / 10;
		len--;
	}
	return (res);
}