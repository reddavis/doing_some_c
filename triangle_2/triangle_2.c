// Write a function that outputs a sideways triangle of height 2n-1 and width n, so the output for n = 4 would be:

#include <stdio.h>

int main() {
  int height, line, star;
  int n = 4;
  int number_of_stars = 1;

  height = (2 * n) - 1;

  for(line = 1; line <= height; line++) {

    for(star = number_of_stars; star > 0; star--) {
      putchar('*');
    }

    if(line < n) {
      number_of_stars += 1;
    } else {
      number_of_stars -= 1;
    }

    putchar('\n');
  }

  return 0;
}