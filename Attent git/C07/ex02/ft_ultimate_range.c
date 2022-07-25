/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:37:15 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/25 18:32:21 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 

int	ft_ultimate_range(int **range, int min, int max)
{
	int size_range;
	int i;

	size_range = max - min;
	i = 0;
	if (size_range <= 0)
		return (0);
	*range = (int *)malloc(sizeof(int) * size_range);
	if (!*range)
		return (-1);
	while (i < size_range && min < max)
	{
		*range[i] = min;
		i ++;
		min += 1;
	}
	return (size_range);
}
