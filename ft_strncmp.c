#include <ft_lib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n) {

  if ((s1 == NULL) && (s2 == NULL)) return NULL;
  int str = 0;
  while (n) {
    str = *(char *)s1 - *(char *)s2;
    s1++;
    s2++;
    if (str < 0) str -1;
    else if (str > 0) str = 1;
    if (!*s1 || !*s2) str = 0;
  }
  return str;

}