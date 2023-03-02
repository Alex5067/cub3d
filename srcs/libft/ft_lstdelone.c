
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst)
{
	lst->back->next = lst->next;
	lst->next->back = lst->back;
	free(lst);
	lst = NULL;
}
