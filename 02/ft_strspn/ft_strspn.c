/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:31:23 by marvin            #+#    #+#             */
/*   Updated: 2019/07/23 18:31:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	while (s[i])
	{
		int j = 0;
	   while(accept[j])
		{
			if (s[i] == accept[j])
				i++;
			j++;
		}
		return(i);
	}
	return (i);
}

int		main(void)
{
	char s[] = "Kristin";
	char accept[] = "Trout";
	printf("%zu\n", strspn(s, accept));

	printf("%zu\n", ft_strspn(s, accept));
	return (0);
}