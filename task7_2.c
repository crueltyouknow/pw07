/*вариант 9*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    long hex = 0;
    long total = 0;

    while ((c = getchar()) != EOF) {
        total++;
        if (isxdigit(c)) {
            hex++;
        }
    }

    printf("Шестнадцатеричных цифр: %ld\n", hex);
    printf("Остальных символов: %ld\n", total - hex);
    printf("Всего обработано символов: %ld\n", total);

    /*
     * isxdigit() истинна для 0-9, a-f и A-F. isdigit() истинна только для
     * 0-9, то есть только для десятичных цифр. Функций isletter() и
     * isnumber() в стандарте C нет: isnumber() есть лишь как расширение
     * в некоторых системах (например, BSD/macOS), а вместо isletter()
     * в стандарте используется isalpha(). isalpha() проверяет, является ли
     * символ буквой (в локали "C" - только латинские A-Z и a-z).
     * Символ новой строки тоже считается символом и входит в общее число.
     */
    return 0;
}
