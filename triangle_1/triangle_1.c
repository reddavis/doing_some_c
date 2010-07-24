#include <stdio.h>

#define triangle_size 6

int main() {
  short line, star;

  for(line = 0; line < triangle_size; line++) {

    for(star = 0; star <= line; star++) {
      putchar('*');
    }

    putchar('\n');
  }

  return 0;
}