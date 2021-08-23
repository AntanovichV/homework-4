#include <ft_lib.h>

char *count(int n, int i, size_t j) {

  char *s;
  char *chars = ft_strdup("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz");
  int c = n;
  size_t k = 1;
  while ((c = c / i))
    k++;
  if (!(s = (char *)malloc(sizeof(char) * (k + 1 + j)))) {
    return NULL;
  } else {
      c = n;
      s[k-- + j] = 0;
      while ((s[k-- + j] = chars[c % i]) && c) {
        c = c / i;
      }
      s[0] = (j == 1) ? '-' : s[0];
      free(chars);
      return (s);
    }
}

char *ft_itoa(int n) {

  if (n >= 0)
    return (count((int)n, 10, 0));
  else
    return (count((int)-n, 10, +1));

}