#include <ft_lib.h>

char *ft_strcat(char *s1, const char *s2) {

  size_t i, j;
  for (i = 0; s1[i] != '\0'; i++)
    ;
    for (j = 0; s2[j] != '\0'; j++)
      s1[i + j] = s2[j];

  s1[i + j] = '\0';

  return s1;
}