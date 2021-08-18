#include <ft_lib.h>

char *ft_strncpy(char *s1, const char *s2, size_t n) {

  if ((s1 == NULL) && (s2 == NULL)) return NULL;
  char *str = s1;
  while (n) {
    *s1++ = *s2++;
    n--;
    if ((*s2 == '\0') && (n <= 0)) {
        *s1++ = '\0';
        return str;
    }
  }
  return str;

}