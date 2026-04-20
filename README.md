# ⏳ Terminal-Based Pomodoro Productivity Tracker (C)

A simple yet powerful Pomodoro productivity tracker built using C. This terminal-based application helps users manage focus sessions, track productivity, and generate reports — all without a graphical interface.

---

## 🚀 Features

- ⏱️ Live countdown timer in terminal (no scrolling)
- 🔄 Pomodoro modes:
  - 25 min work / 5 min break
  - 50 min deep work / 10 min break
- 🔔 Alerts when session ends
- 🧠 Smart break suggestion (long break after 4 sessions)
- 📝 Session logging using file handling
- 📊 Daily and weekly productivity reports

---

## 🛠️ Technologies Used

- C Programming Language
- Standard Libraries:
  - stdio.h
  - time.h
  - stdlib.h
- File Handling (fopen, fprintf, fscanf)

---

## 📂 File Structure

project/
│── main.c
│── sessions.log
│── README.md

---

## ⚙️ How It Works

1. User selects a mode (Pomodoro / Deep Work)
2. Timer runs in terminal with real-time countdown
3. After session ends:
   - Alert is triggered
   - Session is logged into sessions.log
4. Program tracks sessions and:
   - Suggests long breaks
   - Generates summaries

---

## 📝 Logging System

Each session is stored in sessions.log in CSV format:

Task Name, Date, Start Time, Duration

---

## 📊 Reports

- Daily summary of completed sessions
- Weekly productivity analysis
- Tracks consistency and work patterns

---

## 🧪 Testing

- Timer accuracy checked against system clock
- File handling tested for correctness
- Edge cases handled:
  - Empty file
  - Invalid input

---

## 🎯 Use Cases

- Students improving study habits
- Programmers doing deep work
- Lightweight productivity tracking without apps

---

## 🔮 Future Improvements

- GUI version
- Notifications (sound system integration)
- Data visualization (graphs)
- Cross-platform enhancements

---

## 📌 Conclusion

This project demonstrates practical use of:
- Time-based logic
- File handling
- Data processing
- User interaction in C

A simple but effective productivity tool.

---

## 👤 Author

Your Name
