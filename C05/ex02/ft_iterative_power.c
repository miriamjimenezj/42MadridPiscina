/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:44:32 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/20 11:59:42 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include<stdio.h>
int	main(void)
{
int	nb;
int	power;
int	result;

printf("Enter a base number: \n");
scanf("%d", &nb);
printf("Enter an exponent: \n");
scanf("%d", &power);
result = ft_iterative_power(nb, power);
printf("The result is: %d\n", result);
return (0);
}
*/
