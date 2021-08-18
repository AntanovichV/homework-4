#include <ft_lib.h>

void *ft_memalloc(size_t size) {

  void *mem;
  if (mem == NULL) return NULL;
  mem = malloc(sizeof(size));
  return mem;
    
}