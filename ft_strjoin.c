#include <ft_lib.h>

char *ft_strjoin(char const *s1, char const *s2) {
    
  char* result;
  size_t i;
  i = 0;
  if (!s2) return (NULL);
  if (!(result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
    return (NULL);
  while (s1 && s1[i]) {
    result[i] = s1[i];
    i++;
  }
  while (*s2) {
    result[i] = *s2;
    s2++;
    i++;
  }
  result[i] = '\0';
  return result;
}