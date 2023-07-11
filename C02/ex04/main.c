#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	low;
	char	str[] = "lowercase";

	low = ft_str_is_lowercase(str);
	printf("¿El string %s contiene solo números? \n\t0 = no \t1 = si\n %d", str, low);
	return (0);
}