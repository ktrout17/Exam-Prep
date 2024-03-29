/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repreat_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 07:27:34 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/16 07:39:40 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    int letter;

    i = 0;
    if (argc > 1)
    {
        while (argv[1][i])
        {
            letter = 0;
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                letter = argv[1][i] - 63;
                while (--letter)
                    write(1, &argv[1][i], 1);
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                letter = argv[1][i] - 95;
                while (--letter)
                    write(1, &argv[1][i], 1);
            }
            else    
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}