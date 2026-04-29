# 🍅 Pomodoro Timer in C

A simple **console-based Pomodoro Timer** built using C.
This program helps improve productivity by alternating between focused work sessions and short breaks, while also logging session data into a CSV file.

---

## 🚀 Features

* ⏱️ Custom and default timer modes
* 🔁 Continuous Pomodoro cycles
* 🔔 Sound alert using system beep
* 📁 Automatic log folder creation
* 📊 Session logging in `.csv` format
* 🖥️ Real-time countdown display

---

## 🛠️ Technologies Used

* C Programming Language
* Standard Libraries:

  * `stdio.h`
  * `time.h`
* Windows-specific Libraries:

  * `windows.h` (for Sleep and Beep)
  * `direct.h` (for mkdir)

---

## 📦 How It Works

1. Choose mode:

   * **Default Mode** → 25 min work + 5 min break
   * **Custom Mode** → Enter your own time values

2. The timer will:

   * Start the work session
   * Automatically switch to break
   * Repeat until you stop

3. When you exit:

   * Session details are saved in a CSV file

---

## 📁 Output

A folder named:

```
pomodoro_logs/
```

Will be created automatically.

Inside it:

```
session_log.csv
```

Each session is stored like:

```
YYYY-MM-DD HH:MM:SS, Work(min), Break(min), Count
```

---

## ▶️ How to Run

### Compile:

```bash
gcc pomodoro.c -o pomodoro
```

### Run:

```bash
./pomodoro
```

---

## ⚠️ Notes

* This program is designed for **Windows only** (uses `windows.h`)
* Sound alert may not work if system sound is disabled
* `Sleep()` uses milliseconds (1000 = 1 second)

---

## 💡 Future Improvements

* Add pause/resume feature
* GUI version (using graphics library)
* Cross-platform support (Linux/macOS)
* Notifications instead of beep
* Statistics dashboard

---

## 👨‍💻 Author

Created as a **C Final Project** to demonstrate:

* File handling
* Time functions
* Loop control
* Basic system calls

---

## 📌 License

This project is open-source and free to use.
