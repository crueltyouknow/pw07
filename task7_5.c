/*вариант 25*/
#include <stdio.h>
#include <stdbool.h>

/* рекурсивно: перебираем делители d, d+1, ... пока d*d <= n */
static bool is_prime_rec_helper(long n, long d)
{
    if (d * d > n) {
        return true; 
    }
    if (n % d == 0) {
        return false; 
    }
    return is_prime_rec_helper(n, d + 1);
}

bool is_prime_rec(long n)
{
    if (n < 2) {
        return false;
    }
    return is_prime_rec_helper(n, 2);
}
bool is_prime_iter(long n)
{
    long d;

    if (n < 2) {
        return false;
    }
    for (d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

int main(void)
{
    long n;

    printf("Введите числа (для выхода введите не число):\n");
    while (scanf("%ld", &n) == 1) {
        printf("%ld: рекурсивно - %s, итеративно - %s\n", n,
               is_prime_rec(n) ? "простое" : "не простое",
               is_prime_iter(n) ? "простое" : "не простое");
    }

    /*
     * Рекурсия: плюсы - код короче и ближе к математическому определению;
     * минусы - каждый вызов занимает место в стеке (для очень больших
     * простых n глубина достигает sqrt(n) и возможно переполнение стека),
     * вызовы функции медленнее простого цикла. Итерация: быстрее и не
     * расходует стек, но для некоторых задач (деревья, разбиения) запись
     * получается сложнее. Оба способа здесь дают одинаковый результат.
     */
    return 0;
}
