
#include "libft.h"

size_t	ft_strlcpy(char *str1, const char *str2, size_t len)
{
	size_t	n;

	n = 0;
	if (len > 0)
	{
		while (*str2 && len > 1)
		{
			*str1++ = *str2++;
			n++;
			len--;
		}
		*str1 = '\0';
	}
	while (*str2)
	{
		str2++;
		n++;
	}
	return (n);
}
