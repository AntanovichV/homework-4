#include <ft_lib.h>

void ft_putnbr(int n) {

  long num;
  num = n;
  if (num < 0) {
	  ft_putchar('-');
	  num *= -1;
  }
  if (num >= 10) ft_putnbr(num / 10);
  ft_putchar(num % 10 + '0');

}