#include <stdio.h>

int main() {
    int a, b, sum, diff, prod;
    float div;
    int *ptr_a = &a;
    int *ptr_b = &b;
    printf("Моля, въведете две цели числа: ");
    scanf("%d%d", ptr_a, ptr_b);
    sum = *ptr_a + *ptr_b;
    diff = *ptr_a - *ptr_b;
    prod = *ptr_a * *ptr_b;
    div = (float)*ptr_a / *ptr_b;
    printf("Сумата на %d и %d е %d\n", *ptr_a, *ptr_b, sum);
    printf("Разликата между %d и %d е %d\n", *ptr_a, *ptr_b, diff);
    printf("Произведението на %d и %d е %d\n", *ptr_a, *ptr_b, prod);
    printf("Частното на %d и %d е %f\n", *ptr_a, *ptr_b, div);
    return 0;
}
