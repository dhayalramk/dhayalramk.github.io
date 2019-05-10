/**
 * Author: Dhayal ram
 * Email: dhayalram.k@gmail.com
**/
#include <stdio.h>

int main() {
  char s[100];
  scanf("%[^\n]%", &s);
  printf("Hello, World!\n");
  int i = 0;
  while( s[i] != '\0' ){
      printf("%c", s[i]);
      ++i;
  }
  return 0;
}