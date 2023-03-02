
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !*lst)
		*lst = new;
	else if (!(*lst)->back)
	{
		(*lst)->back = new;
		(*lst)->next = new;
		new->next = *lst;
		new->back = *lst;
	}
	else
	{
		new->next = *lst;
		new->back = (*lst)->back;
		(*lst)->back->next = new;
		(*lst)->back = new;
	}
}
