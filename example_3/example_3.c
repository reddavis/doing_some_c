#include <stdio.h>

void square(int number, int *answer);

int main (int argc, char const *argv[]) {
  int answer;

  square(5, &answer);

  printf("The answer is %d", answer);

  return 0;
}

void square(int number, int *answer) {
  *answer = number * number;
}