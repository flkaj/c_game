#include <stdio.h>
int main() {

  int flat;
  printf("몇층?:");
  scanf("%d", &flat);

  for (int i = 0; i < flat; i++) {
    for (int j = i; j < flat - 1; j++) {
      printf(" ");
    }

    for (int m = 0; m < i * 2 + 1; m++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
