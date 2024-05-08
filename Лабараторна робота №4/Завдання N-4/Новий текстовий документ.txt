
#include <stdio.h>
#include <math.h>

int main() {
    double a = 3.0, b = 6.0, dx = 0.05;
    double x, y;

    printf("Результати обчислення функції y = e ^ sqrt(2x) * x ^ 2 на проміжку [%.2lf, %.2lf] з кроком %.2lf:\n", a, b, dx);
  printf("\n*********************\n");
    printf("  x      |      y\n");
  printf("\n*********************\n");

    for (x = a; x <= b; x += dx) {
        if (x <= 0) {
            printf("Невизначений результат для x = %.2lf\n", x);
            continue;
        }

        double sqrt_result = sqrt(2 * x);
        if (sqrt_result < 0 || sqrt_result == INFINITY) {
            printf("Виникла нескінченність для x = %.2lf\n", x);
            continue;
        }

        double x_squared = x * x;
        if (x_squared == INFINITY) {
            printf("Виникла нескінченність для x = %.2lf\n", x);
            continue;
        }

        y = exp(sqrt_result) * x_squared;
        printf("%.2lf   |   %.2lf\n", x, y);
    }

    return 0;
}
