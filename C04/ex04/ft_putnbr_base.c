/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:25:30 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/19 13:12:02 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:00:40 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/19 10:38:53 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	j = i + 1;
	base_len = ft_strlen(base);
	if (base_len == 0 || base_len == 1)
		return (0);
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	num;
	char digit;

	base_len = ft_strlen(base);
	if (!ft_check_base(base))
		return ;
	if (nbr < 0)
	{
		num = -nbr;
		write(1, "-", 1);
	}
	else
	{
		num = nbr;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base);
	digit = base[num % base_len];
	write(1, &digit, 1);
}
/*
#include <stdio.h>

int main() {
int number = -12345;
char *base = "0123456789ABCDEF";

ft_putnbr_base(number, base);
printf("\n");

return 0;
}
*/
