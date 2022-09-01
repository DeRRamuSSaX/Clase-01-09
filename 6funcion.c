#include <stdio.h>
#include <stdlib.h>

void ran_num(int a, int b) {
  int r = a + (rand() % b);
  printf("%d\n", r);
}

int main(void) {
  ran_num(5,10);
  return 0;
}
