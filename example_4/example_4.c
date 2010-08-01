#include <stdio.h>
#include <stdbool.h>

bool is_positive(int number);

int main (int argc, char const *argv[]) {
  printf("5 is positive?: %s", is_positive(5) ? "Yes" : "No");

  return 0;
}

bool is_positive(int number) {
  if(number % 2 == 0) {
    return true;
  } else {
    return false;
  }
}