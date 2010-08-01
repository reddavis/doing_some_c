#include <stdio.h>

void say(char word[10]);

int main() {
  char word[10] = "hello";

  say(word);

  return 0;
}

void say(char word[10]) {
  printf("%s", word);
}