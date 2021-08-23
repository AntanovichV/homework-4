#include <ft_lib.h>

char *ft_strstr(const char *s1, const char *s2) {

  size_t n = strlen(s2);
 
  while (*s1) {
    if (!ft_memcmp(s1, s2, n)) {
      return (char *)s1;
    }
    s1++;
  }
  return NULL;
  
}