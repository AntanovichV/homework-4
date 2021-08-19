#include "ft_lib.h"

void *ft_memccpy(void *dst, const void* src, int c, size_t n) {
  
  char *dst1;
  char *src1;
  size_t i;
  dst1 = (char *)dst;
  src1 = (char *)src;
  i = 0;
  while (n > 0) {
    dst1[i] = src1[i];
    if (src1[i] == (char)c)
      return (dst1 + i + 1);
    i++;
    n--;
  }
  return NULL;

}