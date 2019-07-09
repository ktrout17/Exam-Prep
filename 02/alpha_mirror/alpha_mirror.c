/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:38:41 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/09 10:46:36 by ktrout           ###   ########.fr       */
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
        if (argv[1][i] == ' ')
            i++;
        while (argv[1][i])
        {
            letter = argv[1][i];
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                letter = 'Z' - argv[1][i] + 'A';
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                letter = 'z' - argv[1][i] + 'a';
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}