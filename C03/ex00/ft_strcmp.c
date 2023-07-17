/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:13:48 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/12 10:34:24 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
   int	main(void)
   {
   char	s1[] = "Miriam";
   char	s2[] = "Miriam";
   int		n;

   n = strcmp(s1, s2);
   printf("\nRelacion s1 con s2 strcmp: %d", n);
   n = ft_strcmp(s1, s2);
   printf("\nRelacion s1 con s2 funcion: %d", n);
   }
*/
