#include <ft_lib.h>

int main() {

  char s1 = 'y';
  char s2 = '1';
  int a = isalpha(s1);
  int b = lib_isalpha(s1);
  int c = isalpha(s2);
  int d = lib_isalpha(s2);  

  if (a != 0 && b == 1 && c == d) {
    printf("alpha is ok");
  }

  const char *string;
  const char *string1 = "qwerty";
  const char *string2 = "asdfghjkl";
  int a1 = strlen(string1);
  int b1 = lib_strlen(string1);
  int c1 = strlen(string2);
  int d1 = lib_strlen(string2);

  if(a1 == b1 && c1 == d1){
    printf("str_length is ok");
  }else{
    printf("error");
  }
  return 0;

  void *newmem = ft_memalloc(100);
  if(newmem != NULL) {
    printf("new memory");
  }

  void *delmem = ft_memdel(&newmem);
  if(newmem == NULL) {
    printf("new memory deleted");
  }

  string = ft_strnew(100);
  printf("%s\n", string);

  ft_strdel(&string);
  if(string == NULL) {
    printf("string deleted");
  }

}