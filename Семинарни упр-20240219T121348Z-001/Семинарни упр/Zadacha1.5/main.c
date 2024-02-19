#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    printf("Адресът на x е %p\n", &x);
    printf("Стойността на x е %d\n", x);
    printf("Адресът, който сочи ptr, е %p\n", ptr);
    printf("Стойността, която се съдържа на адреса, който сочи ptr, е %d\n", *ptr);
    return 0;
}
