#include "ft_lib.h"

void *ft_memcmp(const char *s1, const char *s2, size_t n) {

  char	*str1 = (char *)s1;
  char	*str2 = (char *)s2;
  while (n) {
    if (*str1 != *str2)
      return (*str1 - *str2);
    str1++;
    str2++;
	n--;
  }
	return 0;
  
}