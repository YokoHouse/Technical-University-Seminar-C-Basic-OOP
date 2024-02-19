#include <stdio.h>

int main() {
    int time1, time2, time3;
    scanf("%d %d %d", &time1, &time2, &time3);

    int totalSeconds = time1 + time2 + time3;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    printf("%02d:%02d\n", minutes, seconds);

    return 0;
}
