/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:39:46 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/12 13:51:30 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "MIRIAM";

	printf("Antes\n\tsrc: %s\n", str);
	ft_strlowcase(str);
	printf("Después\n\tsrc: %s\n", str);
	return (0);
}
*/
