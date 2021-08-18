#include "ft_lib.h"

void *ft_memmove(void *dst, const void* src, size_t n) {

  char *dst1;
	char *src1;
	if ((dst == NULL) && (src == NULL)) return (NULL);
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (src > dst && n) {
		*dst1 = *src1;
		src1++;
		dst1++;
		n--;
	}
	while (src <= dst && n) {
		dst1[n - 1] = src1[n - 1];
		n--;
	}
	return (dst);
}