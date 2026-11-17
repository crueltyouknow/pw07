/*вариант 18*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int in_space = 0;
    while ((c = getchar()) != EOF) {
        if (isspace(c)) {
            if (!in_space) {
                putchar(' ');
                in_space = 1;
            }
        } else {
            putchar(c);
            in_space = 0;
        }
    }
    putchar('\n');

    /*
     * isspace() считает пробельными символы: пробел, \t, \n, \v, \f, \r.
     * Флаг in_space запоминает, что мы внутри серии таких символов, поэтому
     * пробел выводится только для первого символа серии, остальные пропускаются.
     * Переменная c имеет тип int, чтобы отличить EOF от кода символа.
     */
    return 0;
}
