/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:48:17 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/17 08:27:36 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     iterate(char *s, char c, int len)
{
    int i;

    i = 0;
    while (s[i] && (i < len || len == -1))
    {
        if (s[i++] == c)
            return (1);
    }
    return (0);
}

int     main(int argc, char **argv)
{
    int i;

    if (argc > 2)
    {
        i = 0;
        while (argv[1][i])
        {
                if (!(iterate(argv[1], argv[1][i], i)) && iterate(argv[2], 
                    argv[1][i], -1))
                    write(1, &argv[1][i], 1);
                i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

