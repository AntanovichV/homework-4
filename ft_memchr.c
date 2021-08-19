#include "ft_lib.h"

void *ft_memchr(const void *s, int c, size_t n) {

  unsigned char	*result;
	size_t i;
	result = (unsigned char *)s;
	i = 0;
	while (n > i) {
		if (result[i] == (unsigned char)c)
			return (&result[i]);
		i++;
	}
	return NULL;
  
}