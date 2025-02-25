#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;

	if (size == 0)
	{
		empty_str = malloc(1);
		if (!empty_str)
			return (NULL);
		*empty_str = '\0';
		return (empty_str);
	}
}
