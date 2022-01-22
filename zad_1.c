#include <stdio.h>
#include <math.h>

int main() {
  double a = 2, b = 1, c = 4;

  printf("Program oblicza rownanie kwadratowe w postaci 2ax^2 + bx + 4 = 0.\n");
  printf("--------------------------------\n");

  printf("Podaj wartosc zmiennej A:");
  scanf("%lf", &a);

  printf("Podaj wartosc zmiennej B:");
  scanf("%lf", &b);

  printf("--------------------------------\n");

  printf("Rownanie ma postac 2*%0.1lfX^2 + %0.1lfBX + %0.1lfC = 0\n", a, b, c);

  printf("--------------------------------\n");

  if (a == 0) {
    // bx + c = 0
    // mz f liniowej: -b / a
     double x1 = -c / b;
     printf("Wspolczynnik A wynosi 0. Miejsce zerowe funkcji %lfX + %lf = 0 wynosi %lf", b, c, x1);
     return 0;
  }

  double delta;

  delta = (b * b) - 4 * a * c;
  printf("Delta: %lf\n", delta);

  if (delta > 0) {
    double x1 = (-b - sqrt(delta)) / 2 * a;
    double x2 = (-b + sqrt(delta)) / 2 * a;
    printf("Miejsca zerowe x1: %lf, x2: %lf\n", x1, x2);
  } else if (delta < 0) {
    printf("Brak miejsc zerowych");
  } else {
    double x1 = -b / 2 * a;
    printf("Jedno miejsce zerowe x1: %lf", x1);
  }

  return 0;
}