/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:46:12 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/20 13:57:31 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	while (divisor * divisor <= nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

/*
   int main() {
   int num;
   int next;
   printf("Enter a number: ");
   scanf("%d", &num);

   next = ft_find_next_prime(num);
   printf("Next inmediately grater or equal prime of %d : %d\n", num, next);

   return 0;
   }
   */
