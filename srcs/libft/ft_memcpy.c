
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*s;

	if (!s1 && !s2)
		return (s1);
	s = s1;
	while ((n > 0))
	{
		*(char *)s1 = *(char *)s2;
		s1++;
		s2++;
		n--;
	}
	return (s);
}
