#include <stdio.h>

int main() {
    // Задані сталі величини
    int a = 5, b = -2, c = 3;

    // Обчислення значення функції
    double y = (3 * a - 4 * b + 5 * c) / (a * b + 2 * b * c + 3 * a * c) - a * b - c / 4;

    // Виведення результату
    printf("Значення функції 'y' при a=%d, b=%d, c=%d:\n", a, b, c);
    printf("Результат: %f\n", y);

    return 0;
}
