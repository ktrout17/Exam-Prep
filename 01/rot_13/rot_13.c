/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 07:48:57 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/16 07:59:27 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    int up;
    int down;

    i = 0;
    if (argc > 1)
    {
        while (argv[1][i])
        {
            up = argv[1][i] + 13;
            down = argv[1][i] - 13;
            if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a'
                && argv[1][i] <= 'm'))
                write(1, &up, 1);
            else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || 
                (argv[1][i] >= 'n' && argv[1][i] <= 'z'))
                write(1, &down, 1);
            else 
                write(1, &argv[1][i],1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}