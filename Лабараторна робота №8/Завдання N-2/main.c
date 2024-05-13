#include <stdio.h>

void inputArray(int *arr, int n) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int *arr, int n) {
    printf("Масив елементів:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int productOfEvenIndices(int *arr, int n) {
    int product = 1;
    for (int i = 0; i < n; i += 2) {
        product *= arr[i];
    }
    return product;
}

int sumBeforeMaxAbsElement(int *arr, int n) {
    int maxAbsIndex = 0;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > abs(arr[maxAbsIndex])) {
            maxAbsIndex = i;
        }
    }

    int sum = 0;
    for (int i = 0; i < maxAbsIndex; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);
    printArray(arr, n);

    int product = productOfEvenIndices(arr, n);
    printf("Добуток елементів з парними номерами: %d\n", product);

    int sum = sumBeforeMaxAbsElement(arr, n);
    printf("Сума елементів до максимального за модулем елемента: %d\n", sum);

    return 0;
}
