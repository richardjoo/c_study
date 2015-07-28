#include <stdio.h>

void main() {
  char data[64];

  printf("type something: ");

  if (fgets(data, sizeof data, stdin)) {
    // input has worked, do something with data
    printf("\n\nyou eneterd %s\n", data);
  }
}

