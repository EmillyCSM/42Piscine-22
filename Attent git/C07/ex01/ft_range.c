/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:28:37 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/25 17:34:41 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size_range;
	int *tab_range;
	int i;

	size_range = max - min;
	i = 0;
	if (size_range <= 0)
		return (0);
	tab_range = (int *)malloc(sizeof(int) * size_range);
	if (!tab_range)
		return (0);
	while (i < size_range && min < max)
	{
		tab_range[i] = min;
		i ++;
		min += 1;
	}
	return (tab_range);
}
