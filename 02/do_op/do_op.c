/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:44:39 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/24 08:54:59 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc > 3)
    {
        if (argv[2][0] == '+')
            printf("%d", (atoi(argv[1]) + atoi(argv[3])));
        if (argv[2][0] == '-')
            printf("%d", (atoi(argv[1]) - atoi(argv[3])));
        if (argv[2][0] == '*')
            printf("%d", (atoi(argv[1]) * atoi(argv[3])));
        if (argv[2][0] == '/')
            printf("%d", (atoi(argv[1]) / atoi(argv[3])));
        if (argv[2][0] == '%')
            printf("%d", (atoi(argv[1]) % atoi(argv[3])));
    }
    printf("\n");
    return (0);
}