/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:06:05 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/24 12:44:42 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_program_name(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	print_program_name(argv[0]);
	write(1, "\n", 1);
	return (0);
}
