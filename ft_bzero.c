#include "ft_lib.h"

void ft_bzero(void *s, size_t n) {

  char *str;
  size_t i;
  i = 0;
  str = (char *)s;
  if (n == 0) return;
  while (i < n) {
    str[i] = 0;
    i++;
  }
  
}