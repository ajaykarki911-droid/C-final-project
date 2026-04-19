#include <stdio.h>
#include <unistd.h>   // for sleep()

// function to run timer
void runTimer(int seconds, char message[]) {
    printf("\n%s\n", message);

    for (int i = seconds; i > 0; i--) {
        printf("\rTime left: %d seconds ", i);
        fflush(stdout);
        sleep(1);
    }

    printf("\nTime's up!\a\n");
}

int main() {
    int choice;

    int workTime = 1500;   // 25 minutes
    int breakTime = 300;   // 5 minutes

    printf("=== Pomodoro Timer ===\n");

    while (1) {

        // Work session
        runTimer(workTime, "Work session started! Focus...");

        // Break session
        runTimer(breakTime, "Break time! Relax...");

        printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Session ended. Good job!\n");
            break;
        }
    }

    return 0;
}