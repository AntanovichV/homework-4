#include <ft_lib.h>

void ft_putendl(char const *s) {

  if (!s)
    return ;
  ft_putendl_fd(s, 1);
  
}