#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int hour, minute, second, i;
    char stop[10];  // Changed to an array to store user input

    hour = minute = second = i = 0;

    while (1) {
        system("clear");
        printf("%02d : %02d : %02d ", hour, minute, second);
        fflush(stdout);

        second++;
        if (second == 60) {
            minute++;
            second = 0;
        }
        if (minute == 60) {
            hour++;
            minute = 0;
        }
        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }

        sleep(1);

        // Check if user wants to stop the timer
        printf("\nStop timer? (yes/no): ");
        scanf("%s", stop);

        if (strcmp(stop, "yes") == 0) {
            break;  // Exit the loop if user wants to stop
        }
    }

    return 0;
}
