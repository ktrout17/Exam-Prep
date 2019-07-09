/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:13:49 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/09 10:19:20 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char *argv[])
{
    int i;
    int letter;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            letter = argv[1][i];
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
                letter++;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
                letter++;
            if (argv[1][i] == 'Z' || argv[1][i] == 'z')
                letter = letter - 25;
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}