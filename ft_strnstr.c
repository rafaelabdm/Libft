/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:06:44 by rabustam          #+#    #+#             */
/*   Updated: 2023/04/20 15:22:39 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size_l;
	size_t	count;

	size_l = ft_strlen(little);
	if (!size_l)
		return ((char *)(big));
	count = 0;
	while (*big && size_l <= len && count < len)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, size_l) == 0 \
				&& size_l <= len - count)
				return ((char *)big);
		}
		big++;
		count++;
	}
	return (NULL);
}
