#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*p;

	len = 0;
	p = lst;
	while (p)
	{
		p = p -> next;
		len++;
	}
	return (len);
}
