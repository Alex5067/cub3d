
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	ft_lstadd_back(lst, new);
	if (lst && *lst && (*lst)->back)
		*lst = (*lst)->back;
}
