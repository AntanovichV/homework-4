#include <ft_lib.h>

void ft_lstiter(t_list *lst, void (*f)(t_list *elem)) {
  
  while (lst) {
    f(lst->content);
    lst = lst->next;
  }

}