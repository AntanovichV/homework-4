#include <ft_lib.h>

int ft_isalnum(int s) {

  if (ft_isalpha(s) || ft_isdigit(s))
    return 1;
  else
    return 0;

}