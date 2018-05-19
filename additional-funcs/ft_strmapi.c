#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh;
	int		i;

	if (!s)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	if (!fresh)
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(fresh + i) = f(i, *(s + i));
	return (fresh);
}
