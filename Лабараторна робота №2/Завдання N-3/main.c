#include <stdio.h>

int main() {
    int x, y;

    // Введення даних 
    printf("Введіть значення x: ");
    scanf("%d", &x);

    printf("Введіть значення y: ");
    scanf("%d", &y);

    // Обчислення значення функції
   double f = (double)(x + y) / (x*x + x*y + y*y) + (double)x / (1 + y*y) + (double)y / (1 + x*x);

    // Виведення результату
    printf("Значення функції 'f' при x=%d, y=%d:\n", x, y);
    printf("Результат: %f\n", f);

    return 0;
}
