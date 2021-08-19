#include <ft_lib.h>

t_list *ft_lstnew(void const *content, size_t content_size) {

  t_list *result;
  if (!(result = (t_list *)malloc(sizeof(*result))))
    return NULL;
  if (!content) {
  result->content = NULL;
  result->content_size = 0;
  }
  if (content) {
    if (!((result->content = malloc(content_size))))
      return NULL;
    ft_memcpy(result->content, content, content_size);
    result->content_size = content_size;
	}
	result->next = NULL; 
  return result;

}