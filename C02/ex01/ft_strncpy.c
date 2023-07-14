/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:56:31 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/13 12:49:29 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
   int	main(void) 
   {
   char	source[] = "Miriam J.";
   char	destination[15];
   char	*dest;
   char    *f;
   int n = 6;

   dest = ft_strncpy(destination, source, n);
   printf("My function\n\tsrc: %s\n\tdes: %s\n\tn: %d\n", source, dest, n);
   f = strncpy(destination, source, n);
   printf("strncpy\n\tsrc: %s\n\tdes: %s\n\tn: %d\n", source, dest, n);
   return (0);
   }
 */
