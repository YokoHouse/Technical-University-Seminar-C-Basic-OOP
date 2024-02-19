#include <stdio.h>

int Chetno(int num);

int main() {
    int x = 5;
    if (Chetno(x)) {
        printf("%d е четно \n", x);
    } else {
        printf("%d е нечетно\n", x);
    }
    return 0;
}

int Chetno(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
