#include <ft_lib.h>

char *ft_strstr(const char *s1, const char *s2) {

  if ((s1 == NULL) || (s2 == NULL)) return NULL;
  int len = ft_strlen(s2);
  char *str = s2;
  while(*s1 && *str) {
    if (*s1++ == *str) {
      str++;
    }
    if(!*str) {
      return (s1 - len);
    }
    if (len == (str - s2)) {
      str = s2;
    }
  }
    return NULL;
}