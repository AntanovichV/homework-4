#include "ft_lib.h"

void *ft_memmove(void *dst, const void* src, size_t n) {
  
  if (dst == NULL) return NULL;
  if (dst <= src) {
	return ft_memcpy(dst, src, n);
  } else {
	return ft_memcpy((char *)(dst + n), (char *)(src + n), n);
  }

}