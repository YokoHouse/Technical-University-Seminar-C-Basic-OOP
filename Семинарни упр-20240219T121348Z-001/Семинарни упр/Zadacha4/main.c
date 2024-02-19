#include <stdio.h>

int main() {
    int points;
    double bonus = 0.0;

    printf("Vuvedete broq tochki: ");
    scanf("%d", &points);

    if (points <= 100) {
        bonus = 5.0;
    } else if (points > 100 && points <= 1000) {
        bonus = points * 0.2;
    } else {
        bonus = points * 0.1;
    }

    if (points % 2 == 0) {
        bonus += 1.0;
    } else if (points % 10 == 5) {
        bonus += 2.0;
    }

    double total_points = points + bonus;

    printf("Bonus tochki %.1lf\n", bonus);
    printf("Obsht broi tochki: %.1lf\n", total_points);

    return 0;
}
