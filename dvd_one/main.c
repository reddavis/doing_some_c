#include <stdio.h>

#define k_max_dvds 5
#define k_max_title_length 256
#define k_max_comment_length 256
#define k_error_fgets -1

void PrintDVDTitle(int dvd_num, char titles[][k_max_title_length]);

int main (int argc, const char * argv[]) {
  short dvd_number;
  char titles[k_max_dvds][k_max_title_length];
  char *result;

  for(dvd_number = 0; dvd_number < k_max_dvds; dvd_number++) {
    printf("Title of DVD #%d: ", dvd_number+1);
    // Fill title[dvd] with what it reads from stdin. Max length: k_max_title_length
    result = fgets(titles[dvd_number], k_max_title_length, stdin);

    // fgets returns NULL if error
    if(result == NULL) {
      printf("---ERROR---");
      return k_error_fgets;
    }
  }

  printf("-----\n");

  // Now print dvd titles
  for(dvd_number = 0; dvd_number < k_max_dvds; dvd_number++) {
    PrintDVDTitle(dvd_number, titles);
  }

  return 0;
}

void PrintDVDTitle(int dvd_number, char titles[][k_max_title_length]) {
  printf("Title of DVD #%d: %s\n", (dvd_number + 1), titles[dvd_number]);
}
