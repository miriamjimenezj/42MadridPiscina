/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:12:04 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/20 11:24:27 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
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
