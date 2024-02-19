#include <stdio.h>

int Binarno(int num);

int main() {
    int x = 42;
    int binary = Binarno(x);
    printf("%d бинарно е %d\n", x, binary);
    return 0;
}

int Binarno(int num) {
    int binary = 0, i = 1, remainder;
    while (num != 0) {
        remainder = num % 2;
        num /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}
