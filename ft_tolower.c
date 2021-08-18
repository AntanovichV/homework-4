#include <ft_lib.h>

int ft_tolower(int s) {

  if (s >= 65 && s <= 90) return s + 32;
    return s;
    
}