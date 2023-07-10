/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:37:54 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/10 13:44:48 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_numeric(char *str);
int main(void)
{
	int numeric;
	char str[11] = "0123456789";
	numeric = ft_str_is_numeric(str);
	printf("¿El string %s contiene solo números? \n\t0 = no \t1 = si\n\t %d", str, numeric);
}
