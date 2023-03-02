
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n > 1 && *(unsigned char *)str1 == *(unsigned char *)str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*((unsigned char *)str1) - *((unsigned char *)str2));
}
