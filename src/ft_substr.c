#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sublen;
	char	*substr;

	if (!s)
		return (NULL);
	sublen = ft_strlen(s) - start;
	if (sublen < len)
		len = sublen;
	if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (len > i)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
