/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:21:02 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/24 09:02:00 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char    *ft_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *new_str;

    new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(src) + 1));
    if (new_str == NULL)
        return (NULL);
    return (ft_strcpy(new_str, src));
}