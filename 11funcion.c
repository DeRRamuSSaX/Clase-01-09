#include <stdio.h>
#include <string.h>

void comparar(char a[], char b[]) {
  if (strcmp(a,b) == 0) {
    printf("Son Iguales\n");
  } else {
    printf("No son iguales\n");
  }
}

int main(void) {
  char c[] = { "hola123" };
  char d[] = { "hola123" };
  comparar(c,d);
  return 0;
}
