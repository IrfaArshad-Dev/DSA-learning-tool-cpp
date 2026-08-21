# 🧠 DSA Learning Tool (C++)

An interactive, console-based **Data Structures & Algorithms learning platform** built entirely in C++. Instead of just reading theory, learners get a hands-on, menu-driven experience for every topic: **read the algorithm → run it yourself with live input → test your understanding with a quiz.**

Built as a self-study companion for students learning DSA fundamentals in a CS/university course, with colorful console UI, input validation, and instant scored feedback.

---

## 🎥 Demo

A full walkthrough video (`DSA VIDEO.mp4`) is included in this repository showing the tool in action.

---

## ✨ Key Features

- 🎯 **Three-mode learning loop for every topic**
  - **📖 View Algorithm** — Step-by-step explanation with time complexity breakdown (Best / Worst / Average case)
  - **🛠️ Try It Yourself** — Enter your own array/data and watch the operation execute live
  - **📝 Take Quiz** — 5 MCQs per topic with instant right/wrong feedback and a final score
- 🎨 **Colorful, formatted console UI** using ANSI escape codes (headers, borders, success/error highlighting)
- 🛡️ **Robust input validation** — rejects invalid menu choices, non-numeric input, and malformed MCQ answers instead of crashing
- 🧭 **Deep, nested menu navigation** — go from Main Menu → Data Structure → Operation → Mode, with a `Back` option at every level
- 📊 **Instant quiz scoring** with explanations for every question, right or wrong

---

## 📚 Topics Covered

| Category | Operations |
|---|---|
| **Arrays** | Insert (Start / End / Position), Linear Search, Binary Search, Bubble Sort, Selection Sort, Insertion Sort, Update, Delete |
| **Singly Linked List** | Insert, Delete, Search, Update |
| **Doubly Linked List** | Insert (Start / End / Position), Delete (Start / End / Middle), Search, Update |
| **Circular Linked List** | Delete (Start / End / Middle) |
| **Stack** | Push / Pop operations, Algorithm walkthrough, Try It Yourself, Quiz |
| **Queue** | Enqueue / Dequeue operations, Algorithm walkthrough, Try It Yourself, Quiz |

Every operation above follows the same **Algorithm → Try It Yourself → Quiz** pattern, giving a consistent learning rhythm across the entire tool.

---

## 🖥️ Tech Stack

- **Language:** C++
- **Libraries:** `<iostream>`, `<cstdlib>`, `<windows.h>` (for console UTF-8 support & screen clearing)
- **Platform:** Windows (uses `windows.h` and `system("CLS")`)

---

## 🚀 Getting Started

### Prerequisites
- Windows OS
- A C++ compiler (e.g., MinGW `g++` or MSVC)

### Build & Run

```bash
# Clone the repository
git clone https://github.com/IrfaArshad-Dev/DSA-learning-tool-cpp.git
cd DSA-learning-tool-cpp

# Compile
g++ "DSA CODE.cpp" -o dsa_tool

# Run
./dsa_tool
```

> 💡 On first run, the console initializes UTF-8 output so icons and box-drawing characters render correctly.

---

## 🕹️ How to Use

1. Launch the program — you'll land on the **Main Menu**.
2. Pick a data structure (Arrays, Linked List, Stack, Queue, etc.).
3. Pick an operation (e.g., Insert at Start, Binary Search).
4. Choose a mode:
   - `1` → View the algorithm and its time complexity
   - `2` → Try it yourself with your own input
   - `3` → Take a 5-question quiz and get your score
5. Enter `0` at any menu to go back a level.

---

## 📁 Project Structure

```
DSA-learning-tool-cpp/
├── DSA CODE.cpp     # Full source code — all menus, algorithms, and quizzes
└── DSA VIDEO.mp4     # Demo walkthrough video
```

> The project is currently implemented as a single, self-contained `.cpp` file for simplicity of compilation and distribution.

---

## 🗺️ Roadmap

- [ ] Split into multiple files/headers (`arrays.h`, `linkedlist.h`, `stack.h`, `queue.h`) for maintainability
- [ ] Add Trees (BST) and Graph traversal (BFS/DFS) modules
- [ ] Cross-platform support (replace `windows.h` / `system("CLS")` with a portable alternative)
- [ ] Persistent quiz score tracking across sessions
- [ ] Unit tests for core algorithm functions

---

## 🤝 Contributing

Contributions are welcome! If you'd like to add a new data structure module, improve the quiz bank, or make the tool cross-platform:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/graph-traversal`)
3. Commit your changes
4. Open a Pull Request

---

## 👩‍💻 Author

**Irfa Arshad** — [@IrfaArshad-Dev](https://github.com/IrfaArshad-Dev)

---

## ⭐ Support

If this tool helped you understand DSA better, consider giving the repo a ⭐ — it helps others discover it too!
