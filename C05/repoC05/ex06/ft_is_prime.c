/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:30:18 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/23 12:01:12 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb < 2)
		return (0);
	while (divisor <= nb / 2)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

/*
#include<stdio.h>
int main(void) {
	int num;
	int result;

	printf("Enter a number: ");
	scanf("%d", &num);

	result = ft_is_prime(num);
	if (result == 1) {
		printf("%d is prime\n", num);
	} else {
		printf("%d is not prime\n", num);
		return 0;
	}
}
*/
