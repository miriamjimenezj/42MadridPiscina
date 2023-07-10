/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:56:31 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/10 10:20:58 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
   int	main(void)
   {
   char	source[10] = "Miriam J";
   char	destination[] = "";
   char	*dest;

   printf("source: %s\n", source);
   dest = ft_strncpy(destination, source, 6);
   printf("destination: %s", dest);
   return (0);
   }
   */
