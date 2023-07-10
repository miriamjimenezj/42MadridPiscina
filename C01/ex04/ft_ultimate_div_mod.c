/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:44:53 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/09 18:02:09 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 2;
	printf("a = %d, b = %d \n", a, b);
	ft_ultimate_div_mod(&a,&b);
	printf("a = %d, b = %d", a, b);
}
*/
