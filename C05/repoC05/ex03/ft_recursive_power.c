/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:22:11 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/20 12:23:30 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
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
result = ft_recursive_power(nb, power);
printf("The result is: %d\n", result);
return (0);
}
*/
