#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*buff;
	int		i;
	int		j;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	buff = malloc(sizeof(char) * (len + 1));
	if (!buff || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		buff[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		buff[i] = s2[j];
		i++;
		j++;
	}
	buff[len] = 0;
	return (buff);
}

char	*ft_strchr(const char *str, int ch)
{
	char	*s1;

	s1 = (char *)str;
	while (*s1 != ch && *s1 != 0)
		s1++;
	if (*s1 == ch)
		return (s1);
	else
		return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*buff;

	buff = malloc(size * count);
	if (!buff)
		return (NULL);
	ft_bzero(buff, size * count);
	return (buff);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
