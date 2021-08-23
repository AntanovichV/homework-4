#include <ft_lib.h>

void ft_strclr(char *s) {

  int i = 0;
  int j = ft_strlen(s);
  if (!s)
    return ;
  while (s) {
    s[i] = '\0';
    if (i == j)
      return ;
    i++;
	}
  
}