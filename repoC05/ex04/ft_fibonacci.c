/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:56:47 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/20 13:00:11 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include<stdio.h>

int	main(void)
{
int	index;

printf("Enter an index for Fibonacci: \n");
scanf("%d", &index);
index = ft_fibonacci(index);
printf("The value in that index is: %d", index);
return (0);
}
*/
