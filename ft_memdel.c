#include <ft_lib.h>

void ft_memdel(void **ap) {

  if (!ap) 
    ;
  else 
  free(*ap);
  *ap = NULL;
    
}