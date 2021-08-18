#include <ft_lib.h>

char *ft_strnew(size_t size) {

  if (size == NULL) return NULL;
  char *str = malloc(size + 1);
  ft_memset(str, '\0', size);
  return str;

}