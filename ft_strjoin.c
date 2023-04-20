/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:26:33 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/20 15:21:04 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str[i] = *(char *)s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *(char *)s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
