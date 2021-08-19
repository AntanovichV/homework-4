#include <ft_lib.h>

void *ft_memalloc(size_t size) {

  void *mem;
  mem = malloc(sizeof(size));
  return mem;
    
}