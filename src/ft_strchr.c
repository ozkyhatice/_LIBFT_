#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	i;

	i = (char)c;
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}
