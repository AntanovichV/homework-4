#include <ft_lib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n) {

  unsigned int i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n--) {
		if (s1[i] != s2[i])
			return ((char)s1[i] - (char)s2[i]);
		i++;
	}
	return 0;

}