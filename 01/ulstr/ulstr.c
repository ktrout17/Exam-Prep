/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:21:48 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/09 10:33:17 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char *argv[])
{
    int i;
    int cap;
    int uncap;

    if (argc == 2)
    {
        i = 0;
        if (argv[1][i] == ' ')
            i++;
        while (argv[1][i])
        {
            cap = argv[1][i] - 32;
            uncap = argv[1][i] + 32;
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                write(1, &uncap, 1);
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                write(1, &cap, 1);
            else 
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
