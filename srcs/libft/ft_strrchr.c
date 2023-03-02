
#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char	*c;
	char	*s;

	c = (char *)str;
	s = (char *)(void *)0;
	while (*c)
	{
		if (*c == (unsigned char)a)
			s = c;
		c++;
	}
	if ((unsigned char)a == '\0')
		s = c;
	return (s);
}
