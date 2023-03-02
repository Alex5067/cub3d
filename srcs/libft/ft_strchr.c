
#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	char	*s;

	s = (char *)str;
	while (*s && *s != (unsigned char)a)
		s++;
	if (*s == '\0' && a != '\0')
		return ((void *)0);
	return (s);
}
