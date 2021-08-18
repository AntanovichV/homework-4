#include <ft_lib.h>

char *ft_strchr(const char *str, int s) {

  while (*str != '\0') {
	if (*str == (char)s) return (char*)str;
	  str++;
  }
  return 0;

}