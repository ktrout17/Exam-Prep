/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 07:10:16 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/16 07:18:31 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_isspace(int i)
{
    if (i == '\n' || i == ' ' || i == '\v' || i == '\t' || i == '\r')
        return (1);
    return (0);
}

int     main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc > 1)
    {
        while (ft_isspace(argv[1][i]))
            i++;
        while (!ft_isspace(argv[1][i]) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}