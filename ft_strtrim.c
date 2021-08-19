#include <ft_lib.h>

int space(char c) {
  if(c == ' ' || c == '\n' || c == '\t') return 1;
  return 0;
}

char str_space(char const *s) {

  int i;
  int j;
  i = 0;
  j = 0;
  while (s[i] != '\0') {
    if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
      j++;
    i++;
  }
  if(i == j) return 1;
  return 0;

}

char *ft_strtrim(char const *s) {

  size_t start;
  size_t end;
  size_t i;
  char *result;
  if (!s || !ft_strlen(s))
    return ((char*)s);
  if (str_space(s) == 1)
    return (ft_strnew(1));
  start = 0;
  end = ft_strlen(s) - 1;
  i = 0;
  while (space(s[start]))
    start++;
  while (space(s[end]) != 0)
    end--;
  i = end - start + 1;
  if (!(result = ft_strnew(i + 1)))
    return NULL;
  return ft_strncpy(result, &s[start], i);

}