
#include "libft.h"

int	ft_tolower(int n)
{
	if (n > 64 && n < 91)
		n += 32;
	return (n);
}
