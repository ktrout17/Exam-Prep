/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:49:17 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/09 10:59:20 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char *argv[])
{
    if (argc == 4)
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