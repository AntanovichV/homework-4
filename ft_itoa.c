#include <ft_lib.h>

int count_dig (long n) {

  int result;
  if (n == 0) return (1);
  result = 0;
  while (n != 0) {
    n /= 10;
    result++;
  }
  return result;
}

char *ft_itoa(int n) {

  if (!n) return NULL; 
  char *result;
  int length;
  int pos;
  long num;
  num = n;
  pos = num;
  length = count_dig(num) + (!pos ? 1 : 0);
  num *= pos ? 1 : -1;
  if (!(result = malloc(sizeof(char) * (length + 1))))
	return NULL;
  result[length] = '\0';
  while (length >= 0) {
	result[length - 1] = num % 10 + 48;
	num /= 10;
	length--;
  }
  if (!pos)
	result[0] = '-';
  return result;

}