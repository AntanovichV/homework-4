#include <ft_lib.h>

int ft_strlen(const char *s) {

  int count = 0;
  while (*s != '\0') {
    count++;
    s++;
  }
  return count;

}