#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	s;
	size_t	e;
	size_t	i;

	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	e = ft_strlen(s1);
	while (e > s && ft_strchr(set, s1[e - 1]))
		e--;
	ptr = (char *)malloc(sizeof(char) * (e - s + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s < e)
		ptr[i++] = s1[s++];
	ptr[i] = 0;
	return (ptr);
}
