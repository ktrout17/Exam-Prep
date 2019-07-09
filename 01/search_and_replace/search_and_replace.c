/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:44:52 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/09 10:10:15 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char *argv[])
{
    int i;

    if (argc == 4)
    {
        i = 0;
        if (!argv[2][1] && !argv[3][1])
        {
            while (argv[1][i])
            {
                if (argv[1][i] == argv[2][0])
                    write(1, &argv[3][0], 1);
                else
                    write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}