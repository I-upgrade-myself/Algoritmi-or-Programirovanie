#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функція для перевірки, чи має слово подвоєні літери
int hasDuplicateLetters(const char *word) {
    int len = strlen(word); // довжина рядка
    for (int i = 0; i < len - 1; i++) {
        if (tolower(word[i]) == tolower(word[i + 1])) {
            return 1; // Є подвоєні літери
        }
    }
    return 0; // Немає подвоєних літер
}

int main() {
    char text[1000];
    printf("Введіть текстовий рядок: ");
    fgets(text, sizeof(text), stdin);

    // Видаляємо слова з подвоєними літерами
    char result[1000] = "";
    char *word = strtok(text, " ,.-\n");
    while (word != NULL) {
        if (!hasDuplicateLetters(word)) {
            strcat(result, word);
            strcat(result, " ");
        }
        word = strtok(NULL, " ,.-\n"); // продовжити пошук з поточної позиції в рядку text.
    }

    // Підраховуємо кількість слів
    int wordCount = 0;
    word = strtok(result, " ");
    while (word != NULL) {
        wordCount++;
        word = strtok(NULL, " "); // використовується для продовження пошуку наступного слова після обробки поточного слова.
    }

    printf("Текст без слів з подвоєними літерами: %s\n", result);
    printf("Кількість слів у тексті: %d\n", wordCount);

    return 0;
}
