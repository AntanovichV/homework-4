#include <ft_lib.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

  char s1 = 'y';
  char s2 = '1';
  char s3 = 12;
  char s4 = '+';
  int s5 = 'Z';
  int s6 = 'p';

  void test_isalpha() {  
    int a = isalpha(s1);
    int b = ft_isalpha(s1);
    int c = isalpha(s2);
    int d = ft_isalpha(s2);
    if (a != 0 && b == 1 && c == d) {
      printf("isalpha is ok");
    } else printf("bad");
  }

  void test_isascii() {
    int a = isascii(s1);
    int b = ft_isascii(s1);
    int c = isascii(s3);
    int d = ft_isascii(s3);
    if (a == b && c == d) {
      printf("isascii is ok");
    } else printf("bad");
  }

  void test_isdigit() {
    int a = isdigit(s1);
    int b = ft_isdigit(s1);
    int c = isdigit(s2);
    int d = ft_isdigit(s2);
    if (a == b && c == d) {
      printf("isdigit is ok");
    } else printf("bad");
  }

  void test_isprint() {
    int a = isprint(s1);
    int b = ft_isprint(s1);
    int c = isprint(s4);
    int d = ft_isprint(s4);
    if (a == b && c == d) {
      printf("isprint is ok");
    } else printf("bad");
  }
 
  void test_toupper() {
    int a = toupper(s5);
    int b = ft_toupper(s5);
    int c = toupper(s6);
    int d = ft_toupper(s6);
    if (a == b && c == d) {
      printf("toupper is ok");
    } else printf("bad");
  }

  void test_tolower() {
    int a = tolower(s5);
    int b = ft_tolower(s5);
    int c = tolower(s6);
    int d = ft_tolower(s6);
    if (a == b && c == d) {
      printf("tolower is ok");
    } else printf("bad");
  }

  const char *string;
  const char *string1 = "qwerty";
  const char *string2 = "asdfghjklop";
  const char *string3 = "let's write";
  const char *string4 = "something about c";
  const char *string5 = "12345";
  const char *string6 = "67890";
  const char *string7 = "qwerty";

  void test_strlen() {
    int a = strlen(string1);
    int b = ft_strlen(string1);
    int c = strlen(string2);
    int d = ft_strlen(string2);
    if(a == b && c == d) {
      printf("strlen is ok");
    } else printf("error");
  }

  void test_strchr() {
    int a = strchr(string1, s1);
    int b = ft_strchr(string1, s1);
    int c = strchr(string2, s6);
    int d = ft_strchr(string2, s6);
    if(a == b && c == d) {
      printf("strchr is ok");
    } else printf("error");
  }

  void test_strcmp() {
    int a = strcmp(string1, string7);
    int b = ft_strcmp(string1, string7);
    int c = strcmp(string5, string6);
    int d = ft_strcmp(string5, string6);
    if(a == b && c == d) {
      printf("strcmp is ok");
    } else printf("error");
  }

  return 0;

}