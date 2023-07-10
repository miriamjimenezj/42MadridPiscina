/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:25:29 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/09 18:39:34 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

/*
   int main(void)
   {
   int n;
   char str[] = "Miriam";

   n = ft_strlen(str);
   printf("Numero de letras en %s: %d \n", str, n);
   return(0);
   }
   */
