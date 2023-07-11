/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:25:52 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/11 14:06:20 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(*str) / 16];
			hex[2] = "0123456789abcdef"[(*str) % 16];
			write(1, hex, 3);
		}
		str++;
	}
}
