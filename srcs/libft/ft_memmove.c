
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*s;

	s = s1;
	if (s1 <= s2)
	{
		while (s2 && n-- > 0)
			*(char *)s1++ = *(char *)s2++;
	}
	else
	{
		while (n-- > 0)
			((char *)s1)[n] = ((char *)s2)[n];
	}
	return (s);
}
