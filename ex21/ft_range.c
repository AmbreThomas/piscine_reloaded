/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 10:59:20 by athomas           #+#    #+#             */
/*   Updated: 2016/07/14 08:54:34 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min + 1));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = 0;
	return (tab);
}
