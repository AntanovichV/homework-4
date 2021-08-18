#include <ft_lib.h>

char *ft_strncat(char *s1, const char *s2, size_t n) {

  if ((s1 == NULL) && (s2 == NULL)) return NULL;
  char *str = s1;
  while (*s1) {
    *s1++;
  }
  while (n) {
    *s1++ = *s2++;
    n--;
  }
    *s1++ = '\0';
  return str;

}