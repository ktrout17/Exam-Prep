/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:01:30 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/16 08:14:08 by ktrout           ###   ########.fr       */
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
            letter = argv[1][i];
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Y') 
                letter = letter + 1;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
                letter = letter + 1;
            if (argv[1][i] == 'Z' || argv[1][i] == 'z')
                letter = letter - 25;
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}