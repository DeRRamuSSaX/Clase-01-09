#include <stdio.h>

void print_array(int a[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(void) {
  int a[] = {1,2,3,4};
  int b[] = {55,44,33,22,11};
  int c[] = {10};
  print_array(a,4);
  print_array(b,5);
  print_array(c,1);
  return 0;
}
