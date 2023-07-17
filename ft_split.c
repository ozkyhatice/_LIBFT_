#include "libft.h"

static int	wordcount(const char *s, char c)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			cw++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cw);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		i;
	int		j;
	int		size;

	if (!s)
		return (NULL);
	size = wordcount(s, c);
	newstr = malloc(sizeof(char *) * (size + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		newstr[i++] = ft_substr(s, 0, j);
		s = s + j;
	}
	newstr[i] = NULL;
	return (newstr);
}
