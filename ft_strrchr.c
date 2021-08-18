#include <ft_lib.h>

char *ft_strrchr(const char *str, int s) {

  if (str == NULL) return NULL;
  char *result = NULL;
  while (*str) {
    if (*str == s) {
        result = str;
        str++;
    } else str++;
  }
  return result;

}