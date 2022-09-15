#include <stdio.h>

int main(void){
  int ret = 0;

  printf("Convertendo os tipos para decimal:\n");
  printf("dec(o) - dec(10) - hex(0xa) - asc('A')\n");
  printf("  %d    -   %d    -    %d    -   %d\n", ret, 10, 0xa, 'A');
  printf("%c", 10);
  printf("Convertendo os tipos para hexadecimal:\n");
  printf("dec(o) - dec(10) - hex(0xa) - asc('A')\n");
  printf("  %x    -   %x    -    %x    -   %x\n", ret, 10, 0xa, 'A');
}
