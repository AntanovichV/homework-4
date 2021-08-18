#include <ft_lib.h>

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem)) {
    
  t_list *fresh_list;
  t_list	*list_elem;
  list_elem = f(lst);
  fresh_list = list_elem;
  if (lst && f) {
		while (lst->next) {
			lst = lst->next;
		  if (!(list_elem->next = f(lst))) {
			  free(list_elem->next);
			  return NULL;
		  }
		  else list_elem = list_elem->next;
	    }
		return fresh_list;
	}
	else return NULL;
}