#include <ft_lib.h>

void ft_strdel(char **as) {

  if (*as == NULL) return ;
  free(*as);
  *as = NULL;

}