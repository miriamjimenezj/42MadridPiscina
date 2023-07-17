/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:42:27 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/17 08:10:29 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[50];
	char	dest[50];

	strcpy(src, "source");
	strcpy(dest, "- destination -");
	printf("Those are the stings to append:\n\tSRC: %s\n\tDEST: %s\n", src, dest);
	ft_strcat(dest, src);
	printf("\nFinal result with ft_strcat:  %s\n", dest);
	strcat(dest, src);
	printf("\nFinal result with strcat function:  %s\n", dest);
	return (0);
}
*/
