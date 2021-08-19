#include <ft_lib.h>

void ft_lstdel(t_list **alst, void (*del)(void *, size_t)) {

  t_list *result;
  result = *alst;
  while (result) {
    result = result->next;
    ft_lstdelone(alst, del);
    *alst = result;
  }
  
}

