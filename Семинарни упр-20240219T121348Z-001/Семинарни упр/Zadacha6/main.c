#include <stdio.h>

int main()
{
    int x, y, x1, y1, x2, y2;
    scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2);

    int inside = (x >= x1 && x <= x2 && y >= y1 && y <= y2);
    if (inside) {
        printf("Vutre\n");
    } else {
        printf("Otvun\n");
    }

    return 0;
}
