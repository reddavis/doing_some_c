#include <stdio.h>

#define N 5
float balance[N];

void getlines(void);
void print_summary(void);

void getlines(void) { // read and process each line
  int account;
  float amount;
  while (scanf("%d %f", &account, &amount) != EOF)
    balance[account] += amount;
}

void print_summary(void) {
  int i;
  for (i=0; i < N; i++)
    printf("%d %g\n", i, balance[i]);
}

int main(void) {
  getlines();
  print_summary();
  return 0;
}