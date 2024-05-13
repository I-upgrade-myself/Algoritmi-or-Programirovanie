#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initArray(int array[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 201 - 100;
    }
}

void printArray(int array[], int size) {
    printf("Масив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int nonZeroProduct(int array[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            product *= array[i];
        }
    }
    return product;
}

int sumAfterFirstNegative(int array[], int size) {
    int sum = 0;
    int foundNegative = 0;
    for (int i = 0; i < size; i++) {
        if (foundNegative) {
            sum += abs(array[i]); 
        } else if (array[i] < 0) {
            foundNegative = 1;
        }
    }
    return sum;
}

int main() {
    int SIZE;
    printf("Введіть розмір масиву: ");
    scanf("%d", &SIZE);

    int array[SIZE];

    initArray(array, SIZE);
    printArray(array, SIZE);

    int product = nonZeroProduct(array, SIZE);
    printf("Добуток ненульових елементів масиву: %d\n", product);

    int sum = sumAfterFirstNegative(array, SIZE);
    printf("Сума елементів після першого від'ємного елемента: %d\n", sum); // Змінено з "Сума модулів елементів після першого від'ємного елемента"

    return 0;
}
