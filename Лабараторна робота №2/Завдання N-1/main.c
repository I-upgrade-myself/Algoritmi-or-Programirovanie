#include <stdio.h>

int main() {
    // Оголошення змінних
    int num1, num2;

    // Введення двох цілих чисел
    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);

    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);

    // Обчислити залишок від ділення
    int remainder = num1 % num2;
    printf("Залишок від ділення %d на %d: %d\n", num1, num2, remainder);

    // Обчислити різницю 
    int difference = num2 - num1;
    printf("Різниця між %d і %d: %d\n", num2, num1, difference);

    // Обчислити суму чисел у квадраті
    int sumNum = (num1 + num2) * (num1 + num2);
    printf("Сума чисел у квадраті: %d\n", sumNum);

    return 0;
}
