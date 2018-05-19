#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;

	i = -1;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (src1 < dst1)
		while ((int)(--len) >= 0)
			*(dst1 + len) = *(src1 + len);
	else
		while (++i < len)
			*(dst1 + i) = *(src1 + i);
	return (dst);
}
