/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:45:17 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/09 18:45:38 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 1;
	while (i < size -1)
	{
		if (tab[j] < tab[i])
		{
			aux = tab[j];
			tab[j] = tab[i];
			tab[i] = aux;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
