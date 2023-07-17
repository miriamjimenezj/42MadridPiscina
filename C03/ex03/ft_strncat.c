/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:30:45 by mirjimen          #+#    #+#             */
/*   Updated: 2023/07/17 13:39:35 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char src[20] = "This is source";
    char dest[25] = "This is dest";
    char destfunc[30] = "This is destfunc";
    int n;

    n = 4;
    strncat(dest, src, n);
    printf("String with strncat: %s\n", dest);

    ft_strncat(destfunc, src, n);
    printf("String with ft_strncat: %s\n", destfunc);

}
*/
