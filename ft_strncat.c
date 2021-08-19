#include <ft_lib.h>

char *ft_strncat(char *s1, const char *s2, size_t n) {

  if (!s1 && !s2) return NULL;
  char *str = s1;
  while (*str!= '\0') {
    str++;
  }
  while (n) {
    *str++ = *s2++;
    n--;
  }
    *str = '\0';
  return s1;

}