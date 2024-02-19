#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Purvoto chislo: ");
    scanf("%d", &num1);
    printf("Vtoroto chislo: ");
    scanf("%d", &num2);
    printf("Tretoto chislo: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
