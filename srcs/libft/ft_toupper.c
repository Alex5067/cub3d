
#include "libft.h"

int	ft_toupper(int n)
{
	if (n > 96 && n < 123)
		n -= 32;
	return (n);
}
