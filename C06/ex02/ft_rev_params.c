/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:08:08 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/24 13:22:46 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = argc - 1;
	while (i < argc)
	{
		ft_rev_params(argv[j]);
		j--;
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
