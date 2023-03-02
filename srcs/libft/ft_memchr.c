
#include "libft.h"

void	*ft_memchr(const void *str, int s, size_t n)
{
	void	*result;

	result = (void *)0;
	while (n > 0)
	{
		if (*(char *)str == (char)s)
		{
			result = (void *)str;
			break ;
		}
		str++;
		n--;
	}
	return (result);
}
