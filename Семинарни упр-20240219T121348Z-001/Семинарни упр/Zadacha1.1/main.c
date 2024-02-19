#include <stdio.h>

float calculate_square(float side) {
    return side * side;
}

float calculate_rectangle(float width, float height) {
    return width * height;
}

float calculate_triangle(float base, float height) {
    return base * height / 2;
}

float calculate_circle(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    int shape_code;
    printf("Напишете число, отговарящо на фигурата (1-квадарт, 2-правоъгълник, 3-триъгълник, 4-кръг): ");
    scanf("%d", &shape_code);

    switch(shape_code) {
        case 1: {
            float side;
            printf("Напишете страната на квадрата: ");
            scanf("%f", &side);
            float area = calculate_square(side);
            printf("Лицето на квадрата е: %.2f\n", area);
            break;
        }
        case 2: {
            float width, height;
            printf("Напишете широчината и височината на правоъгълника: ");
            scanf("%f %f", &width, &height);
            float area = calculate_rectangle(width, height);
            printf("Лицето на правоъгълника е: %.2f\n", area);
            break;
        }
        case 3: {
            float base, height;
            printf("Въведете основата и височината на триъгълника: ");
            scanf("%f %f", &base, &height);
            float area = calculate_triangle(base, height);
            printf("Лицето на триъгълника е %.2f\n", area);
            break;
        }
        case 4: {
            float radius;
            printf("Напишете радиуса на кръга: ");
            scanf("%f", &radius);
            float area = calculate_circle(radius);
            printf("Лицето на кръга е: %.2f\n", area);
            break;
        }
        default:
            printf("Неправилен код, отговарящ на фигура .\n");
    }

    return 0;
}
