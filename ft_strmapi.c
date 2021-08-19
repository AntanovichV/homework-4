#include <ft_lib.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char)) {

  char *result;
  unsigned int i;
  i = 0;
  if ((s == NULL) || (f == NULL)) return NULL;
  if (s && f) {
    while (s[i] != '\0') {
      result[i] = (*f)(i, s[i]);
	  i++;
    }
  }
  result[i] = '\0';
  return result;
}