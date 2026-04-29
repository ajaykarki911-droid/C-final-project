#include <stdio.h>
#include<windows.h>   // this header file has sleep() funtion

// Timer
void runTimer(int seconds, char message[])
{
    printf("\n%s\n", message);

    for (int i = seconds; i > 0; i--)
    {
        printf("\rTime left: %d seconds ", i);
        fflush(stdout);
        Sleep(1000);
    }

    printf("\nTime's up!\n");
    Beep(1000, 500); // for sound alert
}

int main()
{
    int workTime;
    int breakTime;
    int choice;
    int mode; //default or custom
    printf("Select mode: 1 for default (25 min work, 5 min break), 2 for custom: ");
    scanf("%d", &mode);
    if (mode == 1) 
    {
        workTime = 25 * 60; // 25 minutes
        breakTime = 5 * 60; // 5 minutes
    } 
    else if (mode == 2)
    {
        printf("Enter work time in minutes: ");
        scanf("%d", &workTime);
        printf("Enter break time in minutes: ");
        scanf("%d", &breakTime);
        workTime = workTime * 60; // convert to seconds
        breakTime = breakTime * 60; // convert to seconds
    }
    else 
    {
        printf("Invalid mode selected. So, choosing default mode.\n");
        workTime = 25 * 60;
        breakTime = 5 * 60;
    }
    
    printf("\n Pomodoro Timer \n");

    while (1) 
    {
        // Work 
        runTimer(workTime, "Pomodoro timer has started!");

        // Break 
        runTimer(breakTime, "It's break time!");

        printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Session ended. Good job!\n");
            break;
        }
    }

    return 0;
}