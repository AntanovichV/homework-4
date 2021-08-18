#include <ft_lib.h>

int ft_atoi(const char *str) {

  int res = 0;
  int pos = 1;
  while (*str && ft_strchr(" \n\t\v\f\r", *str)) {
    str++;
  }
  if (*str == '-') pos = -1;
  if (ft_strchr("+-", *str)) str++;
  while (*str && *str >= '0' && *str <= '9') {
    res = (*str - '0') + (res * 10);
    str++;
  }
	return (res * pos);
}