/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:04:59 by ktrout            #+#    #+#             */
/*   Updated: 2019/08/13 13:04:13 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	int len;
	int n;
	char *new_str;
	char *base_str;

	if (value == 0)
		return (0);
	base_str = "0123456789ABCDEF";
	len = 0;
	n = value;
	while (n)
	{
		n = n / base;
		len++;
	}
	n = value;
	if (n < 0)
	{
		if (base == 10)
			len++;
		n = n * -1;
	}
	if (!(new_str = (char *)malloc(sizeof(char) * len) + 1))
		return (NULL);
	new_str[len] = '\0';
	while (n)
	{
		new_str[--len] = base_str[n % base];
		n = n / base;
	}
	if (value < 0 && base == 10)
		new_str[0] = '-';
	return (new_str);
}