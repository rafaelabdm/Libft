/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit_manipulation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabustam <rabustam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:25:13 by rabustam          #+#    #+#             */
/*   Updated: 2022/10/25 19:05:31 by rabustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_clear_bit(int c, int position)
{
	int	mask;

	mask = 1 << position;
	return (c & ~mask);
}

int	ft_set_bit(int c, int position)
{
	int	mask;

	mask = 1 << position;
	return (c | mask);
}

int	ft_flip_bit(int c, int position)
{
	int	mask;

	mask = 1 << position;
	return (c ^ mask);
}

int	ft_is_bit_set(int c, int position)
{
	int	shifted;

	shifted = c >> position;
	return (shifted & 1);
}

int	ft_is_odd(int c)
{
	return (c & 1);
}
