/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 20:14:36 by marvin            #+#    #+#             */
/*   Updated: 2019/07/08 20:14:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_spaces(int i)
{
    if (i == '\t' || i == '\n' || i == '\f' || i == '\v' || i == ' ')
        return (1);
    return (0);
}

int     main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (ft_spaces(argv[1][i]))
            i++;
        while (!ft_spaces(argv[1][i]) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}