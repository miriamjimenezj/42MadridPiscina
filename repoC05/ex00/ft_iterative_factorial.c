/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:08:05 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/20 11:23:51 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
	}
	return (fact);
}
/*
#include <stdio.h>
int	main(void)
{
int	nb;
int	result;

printf("Imput a number to acalculate a factorial: \n");
scanf("%d", &nb);
result = ft_iterative_factorial(nb);
printf("The factorial of %d is %d\n", nb, result);
return (0);
}
*/
