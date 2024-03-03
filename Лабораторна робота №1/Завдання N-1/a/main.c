#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Введення чисел користувачем
    printf("Введіть перше число: ");
    scanf("%d", &num1);

    printf("Введіть друге число: ");
    scanf("%d", &num2);

    printf("Введіть третє число: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("Максимальне число: %d\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("Максимальне число: %d\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("Максимальне число: %d\n", num3);
    } 
    else {
        printf("Всі числа рівні\n");
    }

    return 0;
}

