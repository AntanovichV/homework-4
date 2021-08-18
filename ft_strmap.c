#include <ft_lib.h>

char *ft_strmap(char const *s, char (*f)(char)) {

  char *result;
  size_t i;
  i = 0;
  if ((s == NULL) || (f == NULL)) return NULL;
  while (s[i]) {
    result[i] = (*f)(s[i]);
    i++;
  }
  result[i] = '\0';
  return result;
}