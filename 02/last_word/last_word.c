/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:37:45 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/17 08:54:09 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    last_word(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] == ' ' && (str[i + 1] >= 33 && str[i + 1] <= 127))
            j = i + 1;
        i++;
    }
    while (str[j] >= 33 && str[j] <= 127)
    {   
        write(1, &str[j], 1);
        j++;
    }
}

int     main(int argc, char **argv)
{
    if (argc > 1)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
