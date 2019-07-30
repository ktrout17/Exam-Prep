/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:44:58 by marvin            #+#    #+#             */
/*   Updated: 2019/07/30 18:44:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s1[j] == s2[i++])
			j++;
	}
	if (s1[j] == '\0')
		write(1, "1", 1);
	else 
		write(1, "0", 1);
}

int		main(int argc, char **argv)
{
    if (argc == 3)
        hidenp(argv[1], argv[2]);
    write(1, "\n", 1);
}