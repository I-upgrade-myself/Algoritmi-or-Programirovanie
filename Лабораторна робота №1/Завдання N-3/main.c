#include <stdio.h>

int main() {
    int second;

    // Введення кількості секунд користувачем
    printf("Введіть кількість секунд: ");
    scanf("%d", &second);

    // Обчислення кількості повних хвилин
    int minutes = second / 60;

    printf("Кількість повних хвилин: %d\n", minutes);

    return 0;
}
