#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Введення довжин сторін трикутника
    printf("Введіть довжину першої сторони: ");
    scanf("%d", &side1);

    printf("Введіть довжину другої сторони: ");
    scanf("%d", &side2);

    printf("Введіть довжину третьої сторони: ");
    scanf("%d", &side3);

    // Перевірка типу трикутника
    if (side1 == side2 && side2 == side3) {
        printf("Трикутник є рівностороннім.\n");
    } else if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("Трикутник є рівнобедреним.\n");
    } else {
        printf("Трикутник є різностороннім.\n");
    }

    return 0;
}
