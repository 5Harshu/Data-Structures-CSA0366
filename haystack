#include <stddef.h>
#include <stdio.h>

char * my_strstr(char * param_1, char * param_2) {
    int i;
    int j;
    for (i = 0; param_1[i] != '\0'; i++) {
      printf("this is a loop for j %c\n", param_1[i]);
      for (j = 0; param_2[j] != '\0'; j++) {
        printf("this is a loop for j %c\n", param_2[j]);
        if (param_1[i] == param_2[j]) {
          printf("figuring out this %c\n", param_1[i]);
          j++;
          i++;
          return &param_1[i];
          printf("figuring out this %c\n", param_1[i]);
        }
      }
    }
  }

int main() {
  char * param_1 = "hello";
  char * param_2 = "ello";

  printf("This is the string %s \n", my_strstr(param_1, param_2));

  return 0;
}
