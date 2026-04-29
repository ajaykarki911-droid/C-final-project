#include <stdio.h>
#include<windows.h>   // this header file has sleep() funtion
#include <time.h>  // this header file has time() function
#include<direct.h> // this header file has mkdir() function
// Timer
void runtimer(int seconds, char message[])
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
void logsession(int workMins, int breakMins, int count)
{
    mkdir("pomodoro_logs");
    FILE *file = fopen("pomodoro_logs/session_log.csv", "a");
    if (file == NULL)
    {
        printf("Error creating log file.\n");
        return;
    }
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    fprintf(file, "%d-%02d-%02d %02d:%02d:%02d, %d, %d, %d\n", 
            t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, 
            t->tm_hour, t->tm_min, t->tm_sec, 
            workMins, breakMins, count);   
    fclose(file);
    printf("Session saved in csv file.\n");
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
    int pomodoroCount = 0;
    while (1) 
    {
        // Work 
        runtimer(workTime, "Pomodoro timer has started!");

        // Break 
        runtimer(breakTime, "It's break time!");
        pomodoroCount++;

        printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            logsession(workTime / 60, breakTime / 60, pomodoroCount);
            printf("Session ended. Good job!\n");
            printf("Total pomodoros completed: %d\n", pomodoroCount);
            break;
        }
    }

    return 0;
}