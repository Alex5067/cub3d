
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*buff;

	while (*lst)
	{
		buff = (*lst)->next;
		free(*lst);
		(*lst) = buff;
	}
	*lst = NULL;
}
