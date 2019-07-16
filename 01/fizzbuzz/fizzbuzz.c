/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <ktrout@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:30:48 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/16 16:51:05 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    n = (n % 10 + '0');
    write(1, &n, 1);
}

int     main(void)
{
    int nbr;

    nbr = 1;
    while (nbr <= 100)
    {
        if ((nbr % 3 == 0) && (nbr % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if (nbr % 3 == 0)
            write(1, "fizz", 4);
        else if (nbr % 5 == 0)
            write(1, "buzz", 4);
        else 
            ft_putnbr(nbr);
        write(1, "\n", 1);
        nbr++;
    }
    return (0);
}