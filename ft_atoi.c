#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		eksi;
	int		num;

	i = 0;
	num = 0;
	eksi = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			eksi *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (eksi * num);
}
