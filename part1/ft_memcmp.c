#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s21;
	size_t			i;

	i = -1;
	s11 = (unsigned char *)s1;
	s21 = (unsigned char *)s2;
	while (++i < n && *(s11 + i) == *(s21 + i))
		;
	if (i == n)
		return (0);
	return (*(s11 + i) - *(s21 + i));
}
