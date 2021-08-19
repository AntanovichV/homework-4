#include <ft_lib.h>

size_t ft_strlen(const char *s) {

  size_t count = 0;
  while (*s != '\0') {
    count++;
    s++;
  }
  return count;

}