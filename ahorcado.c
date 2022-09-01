#include <stdio.h>
#include <stdlib.h>

char *random_word() {
  char *wordlist[] = {
    "asd",
    "alex",
    "tehuel",
    "pedro",
    "kevin"
  };
  return wordlist[rand() % 5];
}

int count_chars(char *s) {
  int length = 0;
  while (s[length] != 0) {
    length++;
  }
  return length;
}

void print_game(int length) {
  printf("\n");
  printf("\n");
  for (int i = 0; i < length; i++) {
    printf(" _ ");
  }
  printf("\n\n");
}

int main(void) {
  char *correct_word = random_word();
  int length = count_chars(correct_word);
  printf("palabra: %s long: %d\n", correct_word, length);
  return 0;
}
