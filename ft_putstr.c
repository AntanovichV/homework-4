#include <ft_lib.h>

void ft_putstr(char const *s) {

  if (!s)
    return ;
  while (*s) {
    ft_putchar_fd(*s, 1);
      s++;
  }
}