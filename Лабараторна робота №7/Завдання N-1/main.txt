#include <stdio.h>

// Функція для перевірки парності числа
int Even(int k) {
    if (k % 2 == 0) {
        return 1; // Повертаємо 1 (True) для парного числа
    } else {
        return 0; // Повертаємо 0 (False) для непарного числа
    }
}

int main() {
    int n; 
    printf("Введіть кількість елементів у масиві: ");
    scanf("%d", &n);

    int array[n]; 
    printf("Введіть %d цілих чисел для масиву:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]); 
    }

    int count = 0; 

    for (int i = 0; i < n; i++) {
        if (Even(array[i])) {
            count++; 
        }
    }

    printf("Кількість парних чисел у масиві: %d\n", count);

    return 0;
}
