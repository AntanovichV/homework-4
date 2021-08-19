#include <ft_lib.h>

char *ft_strrchr(const char *str, int s) {

  size_t	i;
	char	*result;
	result = (char*)str;
	i = ft_strlen(str);
	if (s == '\0')
		return (result + i);
	while (i != 0) {
		if (result[i] == (char)s)
			return (result + i);
		i--;
	}
	if (str[0] == (char)s)
		return result;
	return NULL;

}