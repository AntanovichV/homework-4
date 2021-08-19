#include <ft_lib.h>

char *ft_strstr(const char *s1, const char *s2) {

  size_t i = 0;
  size_t j = 0;
  if (*s2 == '\0')
    return ((char *)s1);
  while(s1[i] != '\0') {
    while(s2[j] == s1[i + j]) {
      if(s2[j + 1] == '\0') 
        return (char *)s1 + i;
      j++;
    }
    i++;
  }
    return NULL;
}