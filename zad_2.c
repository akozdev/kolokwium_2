#include <stdio.h>

void print_array(int arr[5]) {
  for (int i = 0; i < 5; i++) {
    printf("Element %i: %i\n", i, arr[i]);
  }

  printf("\n");
}

void reverse_array(int arr[5]) {
  int temp[5];

  for (int i = 0; i < 5; i++) {
    temp[4 - i] = arr[i];
  }

  for (int i = 0; i < 5; i++) {
    arr[i] = temp[i];
  }
}

int main() {
  int arr1[5];
  int arr2[5];

  for (int i = 0; i < 5; i++) {
    int el;
    printf("Podaj %i-element tablicy (l. calkowita):", i + 1);
    scanf("%i", &el);
    arr1[i] = el;
  }

  printf("Pierwsza tablica przed odwroceniem\n");
  print_array(arr1);

  printf("Pierwsza tablica po odwroceniu\n");
  reverse_array(arr1);
  print_array(arr1);

  printf("---------------------------------------\n");

  for (int i = 0; i < 5; i++) {
    int el;
    printf("Podaj %i-element tablicy (l. calkowita):", i + 1);
    scanf("%i", &el);
    arr2[i] = el;
  }

  printf("Druga tablica przed odwroceniem\n");
  print_array(arr2);

  printf("Druga tablica po odwroceniu\n");
  reverse_array(arr2);
  print_array(arr2);

  return 0;
}