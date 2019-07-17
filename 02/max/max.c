/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 08:56:32 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/17 09:08:19 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     max(int *tab, unsigned int len)
{
    int i;
    int max_value;

    if (!tab)
        return (0);
    i = 0;
    while (len--)
    {
        if (tab[i] > tab[i + 1])
            max_value = tab[i];
        i++;
    }
    return (max_value);
}