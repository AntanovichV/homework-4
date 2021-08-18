#include "ft_lib.h"

void *ft_memset(void *mem, int v, size_t n) {

  char *str;
  size_t i;
  i = 0;
  str = (char *)mem;
  while (i < n) {
    str[i] = (char)v;
    i++;
  }
  return mem;
  
}