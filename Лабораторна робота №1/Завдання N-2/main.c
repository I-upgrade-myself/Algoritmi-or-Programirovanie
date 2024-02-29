#include <stdio.h>
#include <math.h>

int main() {
    // Радіус кола та координати центру кола
    double r;  // Змінна для радіуса кола
    double centerX = 1.0;
    double centerY = 0.0;

    // Введення радіуса кола
    printf("Введіть радіус кола: ");
    scanf("%lf", &r);

    // Координати точки
    double x, y;

    // Введення координати x
    printf("Введіть координату x: ");
    scanf("%lf", &x);

    // Введення координати y
    printf("Введіть координату y: ");
    scanf("%lf", &y);

    // Визначення відстані від точки до центру кола за допомогою формули відстані
    double distance = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));

    // Перевірка, чи точка лежить поза колом
    if (distance > r) {
        printf("Точка лежить поза колом\n");
    } else if (distance < r) {
        printf("Точка лежить всередині кола\n");
    } else {
        printf("Точка лежить на колі\n");
    }

    return 0;
}
