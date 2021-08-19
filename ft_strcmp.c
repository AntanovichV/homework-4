#include <ft_lib.h>

int ft_strcmp(const char *s1, const char *s2) {
  
  for (int i = 0; ; i++) {
    if (s1[i] != s2[i]) {
      return s1[i] < s2[i] ? -1 : 1;
    }
    if (s1[i] == '\0') {
      return 0;
    }
  }
}