#include <ft_lib.h>

int ft_isalpha(int s) {

  if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
    return 1;
  else
    return 0;

}