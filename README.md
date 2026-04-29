# Pomodoro Timer in C

This is a simple console-based Pomodoro timer written in C. It allows users to run timed work and break sessions, and it keeps a record of completed sessions in a CSV file.

## Features

* Default mode (25 minutes work, 5 minutes break)
* Custom mode where users can enter their own timings
* Continuous timer loop until the user chooses to stop
* Audible alert when each session ends
* Automatic creation of a log folder
* Session data saved in CSV format

## How It Works

When the program starts, the user selects either default or custom mode.
The timer then runs a work session followed by a break session. This cycle continues until the user decides to stop.

At the end of the session, the program saves:

* Date and time
* Work duration (in minutes)
* Break duration (in minutes)
* Number of completed Pomodoro cycles

## Output

A folder named `pomodoro_logs` is created in the project directory.
Inside it, a file named `session_log.csv` stores the session records.

Each entry in the file looks like this:

YYYY-MM-DD HH:MM:SS, work_minutes, break_minutes, pomodoro_count

## How to Compile and Run

Compile the program using:

gcc pomodoro.c -o pomodoro

Run the program using:

./pomodoro

## Requirements

* Windows operating system
* GCC compiler (such as MinGW)

## Notes

* The program uses `windows.h` for Sleep and Beep functions, so it is not cross-platform.
* The sound alert depends on system settings and may not work if system audio is disabled.
* Time input in custom mode is given in minutes but internally converted to seconds.

## Possible Improvements

* Add pause and resume functionality
* Handle invalid input more robustly
* Make it cross-platform
* Add a graphical interface
* Provide more detailed session statistics

## Author

Created as a final project in C to demonstrate basic programming concepts such as loops, functions, file handling, and time management.
