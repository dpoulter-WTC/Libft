#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
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
		*(fresh + i) = f(*(s + i));
	return (fresh);
}
