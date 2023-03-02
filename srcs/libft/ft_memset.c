
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;

	s = str;
	while (n > 0)
	{
		*s = (char)c;
		s++;
		n--;
	}
	return (str);
}
