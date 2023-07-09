/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 08:32:06 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/09 12:19:26 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	f;
	int	c;

	c = 1;
	while (c <= y && x > 0)
	{
		f = 1;
		while (f <= x)
		{
			if ((f == 1 && c == 1) || (f == 1 && c == y))
				ft_putchar('A');
			else if ((f == x && c == 1) || (f == x && c == y))
				ft_putchar('C');
			else if ((f == 1) || (f == x) || (c == 1) || (c == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			f++;
		}
		ft_putchar('\n');
		c++;
	}
}
