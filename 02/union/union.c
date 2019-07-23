/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:31:27 by ktrout            #+#    #+#             */
/*   Updated: 2019/07/23 16:46:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cmp(char *str, char c, int len)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	if (i == len)
		write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		ft_cmp(s1, s1[i], i);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s1[j] == s2[i])
				break;
			j++;
		}
		if (!s1[j])
			ft_cmp(s1, s2[i], i);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}