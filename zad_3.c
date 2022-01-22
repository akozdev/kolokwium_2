#include <stdio.h>

int main() {
  int n;
  printf("Podaj liczbe wieksza niz 3: ");
  scanf("%i", &n);

  if (n < 4) {
    printf("Zla liczba!");
    return 0;
  }

  for (int i = 4; i <= n + 1; i++) {
    if (i == n + 1) {
      printf("%i", i);
    } else {
      printf("%i*", i);
    }
  }

  return 0;
}