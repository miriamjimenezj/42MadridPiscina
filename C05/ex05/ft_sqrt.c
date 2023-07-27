/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:01:19 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/23 11:59:59 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (i > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			else if (i >= 46341)
				return (0);
			i++;
		}
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	int	nb;

	nb = 0;
	printf("Enter the number to make the square root: ");
	scanf("%d", &nb);
	nb = ft_sqrt(nb);
	printf("The result is: %d\n", nb);
	return (0);
}
*/
