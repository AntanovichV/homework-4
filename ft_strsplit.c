#include <ft_lib.h>

size_t	count_words(char const *s, char c) {

  size_t result;
  int i;
  result = 0;
  i = 0;
  while (*s) {
    if (!i && *s != c) {
      result++;
      i = 1;
    }
    if (i && *s == c) i = 0;
    s++;
  }
  return result;
  
}

size_t	count_length(char const *str, int c) {

  size_t result;
  result = 0;
  while (*str && *str != c) {
    result++;
    str++;
  }
  return (result);

}

void new_str(char *s, char const *str, char c) {

  while (*str && *str != c) {
    *s = *str;
    s++;
    str++;
  }
  *s = '\0';

}

int result_arr(char **arr, char const *str, char c) {

  size_t n;
  size_t len;
  int i;
  n = 0;
  i = 0;
  while (*str) {
    if (!i && *str != c) {
      len = count_length(str, c);
      if (!(arr[n] = malloc(sizeof(char) * (len + 1))))
        return (0);
      new_str(arr[n], str, c);
      i = 1;
      n++;
    }
    if (i && *str == c) i = 0;
    str++;
  }
  arr[n] = NULL;
  return 1;

}

char **ft_strsplit(char const *s, char c) {

  size_t i;
  char **result;
  if (!s)
    return NULL;
  i = count_words(s, c);
  if (!(result = malloc(sizeof(char *) * (i + 1))))
    return NULL;
  if (!result_arr(result, s, c)) {
	while (i) {
      free(result[i]);
      i--;
    }
    free(result);
    return NULL;
  }
  return result;

}