#include <stdio.h>
#include <stdlib.h>

#define k_max_buffer 200

// SKU's
struct SKU {
  char name;
  int weight;
  int cost;
  struct SKU *next;
} *head_ptr, *tail_ptr;

// Prototypes
void add_to_sku_list(struct SKU *sku);
struct SKU *build_sku(char *input);

// Codez
void add_to_list(char input) { }

struct SKU *build_sku(char *input) {


  return 0;
}

int main (int argc, char const *argv[]) {
  FILE *fp;
  char buffer[k_max_buffer];

  // Point to no-where
  head_ptr = NULL;
  tail_ptr = NULL;

  fp = fopen("./input_file.txt", "r");

  if(fp == NULL) {
    printf("File does not exist!");
    return 1;
  }

  // Run through the input file and build our structs
  int counter = 0;
  int minimum_weight;

  while(fgets(buffer, 200, fp) != NULL) {
    if(counter == 0) {
      minimum_weight = atoi(buffer);
    } else {
      //add_to_sku_list( build_sku(buffer) );

      build_sku(buffer);
    }

    counter++;
  }

  // All done with that
  fclose(fp);

  return 0;
}