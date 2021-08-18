#include "ft_lib.h"

void *ft_memcpy(void *dst, const void* src, size_t n) {

  char *dst1;
  char *src1;
  dst1 = (char *)dst;
  src1 = (char *)src;
  if ((dst == NULL) && (src == NULL)) return (NULL);
  while (n) {
    *dst1++ = *src1++;
    --n;
  }
  return dst;
  
}