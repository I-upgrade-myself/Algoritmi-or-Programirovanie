#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);

    int a[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int *ptr = a;
    int sign_change = 0;

    for (int i = 1; i < n; i++) {
        if ((*ptr < 0 && a[i] >= 0) || (*ptr >= 0 && a[i] < 0)) {
            sign_change = 1;
        } else {
            if (sign_change) {
                count++;
                sign_change = 0;
            }
        }
        ptr++;
    }

    if (sign_change) {
        count++;
    }

    printf("Кількість ділянок = %d\n", count);

    return 0;
}
