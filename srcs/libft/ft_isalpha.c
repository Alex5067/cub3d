
#include "libft.h"

int	ft_isalpha(int n)
{
	return ((n > 64 && n < 91) || (n > 96 && n < 123));
}
