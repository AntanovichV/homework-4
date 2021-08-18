#include <ft_lib.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n) {
	
  size_t i;
  size_t j;
  i = 0;
  if (ft_strlen(s2) == 0)
    return ((char *)s1);
  while (s1[i] && n != 0 && i < n) {
    if (s1[i] == *s2) {
      j = 0;
      while (s1[i + j] == s2[j] && s1[i + j] && s2[j])
        j++;
        if (!s2[j] && i + j <= n)
          return ((char *)&s1[i]);
    }
    i++;
  }
  return NULL;

}