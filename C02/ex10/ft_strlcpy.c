/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:53:50 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/13 12:59:26 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (src[j] != '\0')
		j++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

/*
   int main() {
   char source[] = "Miriam J";
   char destination1[15];
   char destination2[15];

   unsigned int copy1 = ft_strlcpy(destination1, source, 5);
   unsigned int copy2 = strlcpy(destination2, source, 5);

   printf("Origen: %s\n", source);
   printf("Destino: %s\n", destination1);
   printf("Mi funcion: %u\n", copy1);
   printf("Destino: %s\n", destination2);
   printf("Funcion Original: %u\n", copy2);

   return 0;
   }
   */
