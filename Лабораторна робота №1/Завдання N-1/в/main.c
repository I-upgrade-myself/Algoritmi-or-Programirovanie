#include <stdio.h>

int main() {
    int seg1, seg2, seg3;

    // Введення довжин відрізків користувачем
    printf("Введіть першу довжину відрізка: ");
    scanf("%d", &seg1);

    printf("Введіть другу довжину відрізка: ");
    scanf("%d", &seg2);

    printf("Введіть третю довжину відрізка: ");
    scanf("%d", &seg3);

    // Перевірка та виведення результату
    if (seg1 + seg2 > seg3 && seg1 + seg3 > seg2 && seg2 + seg3 > seg1) {
        printf("Можна побудувати трикутник.\n");
    } else {
        printf("Неможливо побудувати трикутник.\n");
    }

    return 0;
}
