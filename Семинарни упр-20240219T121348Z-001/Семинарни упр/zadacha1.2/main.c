#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x = 5, y = 10;
    printf("Преди размяна: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("СЛед размяна: x=%d, y=%d\n", x, y);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
