
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	result;
	size_t	check_result;

	result = 0;
	while (dst[result] && result < dstsize)
		result++;
	check_result = result;
	while (*src && result + 1 < dstsize)
		dst[result++] = *src++;
	if (result > check_result)
		dst[result] = '\0';
	while (*src++)
		result++;
	return (result);
}
