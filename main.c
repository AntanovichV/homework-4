#include "ft_lib.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

  char s1 = 'y';
  char s2 = '1';
  char s3 = 12;
  char s4 = ' ';
  int s5 = 'Z';
  int s6 = 'p';
  char *s7 = "14.16";
  char *s8 = "37ivm";

  void test_atoi() {
    int a = atoi(s7);
    int b = ft_atoi(s7);
    int c = atoi(s8);
    int d = ft_atoi(s8);
    if (a == b && c == d) {
      printf("atoi is ok\n");
    } else printf("bad");
  }

  void test_isalnum() {
    int a = isalnum(s1);
    int b = ft_isalnum(s1);
    int c = isalnum(s2);
    int d = ft_isalnum(s2);
    if (a == c && b == d) {
      printf("isalnum is ok\n");
    } else printf("bad");
  }

  void test_isalpha() {
    int a = isalpha(s1);
    int b = ft_isalpha(s1);
    int c = isalpha(s2);
    int d = ft_isalpha(s2);
    if (a != 0 && b == 1 && c == d) {
      printf("isalpha is ok\n");
    } else printf("bad");
  }

  void test_isascii() {
    int a = isascii(s1);
    int b = ft_isascii(s1);
    int c = isascii(s3);
    int d = ft_isascii(s3);
    if (a == b && c == d) {
      printf("isascii is ok\n");
    } else printf("bad");
  }

  void test_isdigit() {
    int a = isdigit(s1);
    int b = ft_isdigit(s1);
    int c = isdigit(s2);
    int d = ft_isdigit(s2);
    if (a == b && c != 0 && d == 1) {
      printf("isdigit is ok\n");
    } else printf("bad");
  }

  void test_isprint() {
    int a = isprint(s1);
    int b = ft_isprint(s1);
    int c = isprint(s2);
    int d = ft_isprint(s2);
    if (a == c && b == d) {
      printf("isprint is ok\n");
    } else printf("bad");
  }
 
  void test_toupper() {
    int a = toupper(s5);
    int b = ft_toupper(s5);
    int c = toupper(s6);
    int d = ft_toupper(s6);
    if (a == b && c == d) {
      printf("toupper is ok\n");
    } else printf("bad");
  }

  void test_tolower() {
    int a = tolower(s5);
    int b = ft_tolower(s5);
    int c = tolower(s6);
    int d = ft_tolower(s6);
    if (a == b && c == d) {
      printf("tolower is ok\n");
    } else printf("bad");
  }

  const char *string;
  char *string1 = "qwerty";
  char *string2 = "asdfghjklop";
  char *string3 = "let's write";
  char *string4 = "something about c";
  char *string5 = "12345";
  char *string6 = "67890";
  char *string7 = "qwerty";

  void test_strlen() {
    int a = strlen(string1);
    int b = ft_strlen(string1);
    int c = strlen(string2);
    int d = ft_strlen(string2);
    if(a == b && c == d) {
      printf("strlen is ok\n");
    } else printf("error");
  }

  void test_strchr() {
    char *a = strchr(string1, s1);
    char *b = ft_strchr(string1, s1);
    char *c = strchr(string2, s6);
    char *d = ft_strchr(string2, s6);
    if(a == b && c == d) {
      printf("strchr is ok\n");
    } else printf("error");
  }

  void test_strcmp() {
    int a = strcmp(string1, string7);
    int b = ft_strcmp(string1, string7);
    int c = strcmp(string5, string6);
    int d = ft_strcmp(string5, string6);
    if(a == b && c < 0 && d < 0) {
      printf("strcmp is ok\n");
    } else printf("error");
  }

  void test_strcat() {
    const int s1_l = strlen(string3);
    const int s2_l = strlen(string4);
    const int s3_l = strlen(string5);
    const int s4_l = strlen(string6);
    char *str1 = (char*)malloc(s1_l+s2_l+1);
    char *str3 = (char*)malloc(s3_l+s4_l+1);
    strcpy(str1, string3);
    strcpy(str3, string5);
    char *a = strcat(str1, string4);
    char *b = ft_strcat(str1, string4);
    char *c = strcat(str3, string6);
    char *d = ft_strcat(str3, string6);
    if (strcmp(a, b) == 0 && strcmp(c, d) == 0){
      printf("strcat is ok\n");
    } else printf("bad");
  }

  void test_strcpy() {
    const char *str2 = "qwerty";
    char *str1 = (char*)malloc(strlen(str2)+1);
    const char *str4 = "asdfghjkl";
    char *str3 = (char*)malloc(strlen(str4)+1);
    char * a = strcpy(str1, str2);
    char * b = ft_strcpy(str1, str2);
    char * c = strcpy(str3, str4);
    char * d = ft_strcpy(str3, str4);
    if(a == b && c == d){
      printf("strcpy is ok\n");
    }else printf("bad");
  }

  void test_strdup() {
    char *a = strdup(string1);
    char *b = ft_strdup(string1);
    char *c = strdup(string2);
    char *d = ft_strdup(string2);

    if(strcmp(a,b) == 0 && strcmp(c,d) == 0){
      printf("strdup is ok\n");
    } else printf("bad");
  }

  void test_strncpy() {
    size_t n = 3;
    const char *str2 = "qwerty";
    char *str1 = (char*)malloc(strlen(str2)+1);
    const char *str4 = "asdfghjkl";
    char *str3 = (char*)malloc(strlen(str4)+1);
    char * a = strncpy(str1, str2, n);
    char * b = ft_strncpy(str1, str2, n);
    char * c = strncpy(str3, str4, n);
    char * d = ft_strncpy(str3, str4, n);
    if(a == b && c == d){
      printf("strncpy is ok\n");
    }else printf("bad");
  }

  void test_strlcat() {
    const int s1_l = strlen(string3);
    const int s2_l = strlen(string4);
    const int s3_l = strlen(string5);
    const int s4_l = strlen(string6);
    char *str1 = (char*)malloc(s1_l+s2_l+1+1);
    char *str3 = (char*)malloc(s3_l+s4_l+1+1);
    strcpy(str1, string3);
    strcpy(str3, string5);
    size_t size1 = sizeof(str1);
    size_t size3 = sizeof(str3);
    char *a = strncat(str1, string4, size1);
    size_t b = ft_strlcat(str1, string4, size1);
    char *c = strncat(str3, string6, size3);
    size_t d = ft_strlcat(str3, string6, size3);
    if (*a == b && *c == d){
      printf("strlcat is ok\n");
    } else printf("bad");
  }

  void test_strncat() {
    size_t n = 3;
    const int s1_l = strlen(string3);
    const int s2_l = strlen(string4);
    const int s3_l = strlen(string5);
    const int s4_l = strlen(string6);
    char *str1 = (char*)malloc(s1_l+s2_l+1);
    char *str3 = (char*)malloc(s3_l+s4_l+1);
    strcpy(str1, string3);
    strcpy(str3, string5);
    char *a = strncat(str1, string4, n);
    char *b = ft_strncat(str1, string4, n);
    char *c = strncat(str3, string6, n);
    char *d = ft_strncat(str3, string6, n);
    if (strcmp(a, b) == 0 && strcmp(c, d) == 0){
      printf("strncat is ok\n");
    } else printf("bad");
  }

test_atoi();
test_isalnum();
test_isalpha();
test_isascii();
test_isdigit();
test_isprint();
test_toupper();
test_tolower();
test_strlen();
test_strchr();
test_strcmp();
test_strcat();
test_strcpy();
test_strdup();
test_strncpy();
test_strlcat();
test_strncat();


  return 0;

}