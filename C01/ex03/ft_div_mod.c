/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:27:20 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/09 17:36:23 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void){
	int a = 11;
	int b = 2;
	int div = 0;
	int mod = 0;

	ft_div_mod(a,b,&div, &mod);
	printf("a = %d, b = %d, \ndiv: %d , mod: %d", a, b, div, mod);
}
*/
