/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:31:31 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/17 08:16:03 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int i;
    int len;
    int temp;

    len = 0;
    while (str[len])
        len++;
    i = -1;
    while (++i < --len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
    return (str);
}