/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:02:09 by marvin            #+#    #+#             */
/*   Updated: 2019/07/23 17:02:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (*str1)
	{
		if (ft_strchr(str2, *str1) != 0)
			return (str1);
		str1++;
	}
	return (NULL);
}