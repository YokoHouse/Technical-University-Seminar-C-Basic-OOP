#include <stdio.h>

int main() {
    int hour, minute;

    printf("Vuvedete chas (ot 00 do 23): ");
    scanf("%d", &hour);
    printf("Vuvedete minuti (ot 00 do 59): ");
    scanf("%d", &minute);

    minute += 15;
    if (minute >= 60) {
        hour += 1;
        minute -= 60;
    }
    if (hour >= 24) {
        hour -= 24;
    }

    printf("SLed 15 minuti she e: %02d:%02d\n", hour, minute);

    return 0;
}
