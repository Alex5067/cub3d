
#include "libft.h"

int	ft_isalnum(int n)
{
	return ((n > 64 && n < 91) || (n > 96 && n < 123) || (n > 47 && n < 58));
}
