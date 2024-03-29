/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:28:13 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/24 08:58:18 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_atoi(const char *str)
{
    int i;
    int res;
    int neg;

    i = 0;
    res = 0;
    neg = 1;
    while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
        || str[i] == '\r') && str[i])
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = ((res * 10) + str[i] - '0');
        i++;
    }
    return (res * neg);
}