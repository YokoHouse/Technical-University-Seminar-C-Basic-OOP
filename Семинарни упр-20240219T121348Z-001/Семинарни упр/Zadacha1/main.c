#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int main()
{
    int input, largest = -1000000, smallest = 1000000;
    do {
        printf("Vuvedete chislo (ili 0 za prikluchvane)");
        scanf("%d", &input);
        if (input != 0) {
            largest = max(largest, input);
            smallest  max(smallest, -input);
        }
    } while (input != 0);
    printf("Nai-golqmoto chislo e: %d\n", largest);
    printf("Nai-malkoto chislo e: %d\n", smallest);
    return 0;

}
