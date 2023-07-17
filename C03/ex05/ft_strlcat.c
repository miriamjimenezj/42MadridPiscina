/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:46:05 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/17 13:06:43 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	if (size <= j)
		return (ft_strlen(src) + size);
	while (src[i] != 0 && i + j < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	return (j + ft_strlen(src));
}
/*
   int	main(void)
   {
   char	src[50] = "source";
   char	dest[50] = "destination";
   unsigned int final;
   unsigned int finalf;
   final = strlcat(src, dest, 4);
   finalf = ft_strlcat(src, dest, 4);

   printf("Those are the stings to append:\n\tSRC: %s\n\tDEST: %s\n", src, dest);
   printf("\nFinal result with strlcat: %s,  %u\n", dest, final);
   printf("\nFinal result with my function: %s,  %u\n", dest, finalf);
   return (0);
   }
   */
