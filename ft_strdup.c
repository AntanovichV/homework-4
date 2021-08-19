#include <ft_lib.h>

char *ft_strdup(const char *s) {

  char *str;
  size_t len = ft_strlen(s) + 1;
  str = malloc(len);
  if (str) {
    ft_memcpy(str, s, len);
  }
  return str;

}