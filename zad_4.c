#include <stdio.h>

void print_array(int arr[10]) {
  for (int i = 0; i < 10; i++) {
    printf("Element %i: %i\n", i, arr[i]);
  }

  printf("\n");
}

int main() {
  int arr[10];
  int sumaDodatnia = 0, sumaUjemna = 0;

  for (int i = 0; i < 10; i++) {
    int el;
    printf("Podaj %i-element tablicy (l. calkowita):", i + 1);
    scanf("%i", &el);
    arr[i] = el;
  }

  printf("Tablica:\n");
  print_array(arr);

  printf("---------------------------------------\n");

  for (int i = 0; i < 10; i++) {
    if (arr[i] > 0) {
      sumaDodatnia += arr[i];
    } else if (arr[i] < 0) {
      sumaUjemna += arr[i];
    }
  }

  printf("Suma liczb dodatnich wynosi: %i\n", sumaDodatnia);
  printf("Suma liczb ujemnych wynosi: %i\n", sumaUjemna);

  return 0;
}