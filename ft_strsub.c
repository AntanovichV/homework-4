#include <ft_lib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len) {

  unsigned int i;
  char *result;
  i = 0;
  if (!s)
    return (NULL);
  result = ft_strnew(len);
  if (!result)
    return (NULL);
  if (s) {
    while (i != len) {
      result[i] = s[start + i];
      i++;
    }
  }
  result[len] = '\0';
  return result;

}
