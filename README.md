# 📘 Object-Oriented Programming — Assignment 3

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/Subject-OOP-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Questions-7-orange?style=for-the-badge" />
</p>

---

## 👤 Student Details

| Field | Details |
|---|---|
| **Name** | Parminder Rathour |
| **Subject** | Object-Oriented Programming (OOP) |
| **Assignment** | Assignment 3 |
| **Language** | C++ |

---

## 📋 Table of Contents

- [About](#about)
- [Questions Covered](#questions-covered)
- [Concepts Used](#concepts-used)
- [How to Run](#how-to-run)
- [File Structure](#file-structure)

---

## 📖 About

This repository contains the solution to **Assignment 3** of the Object-Oriented Programming course. The assignment covers more advanced C++ concepts including **pointers to objects**, **the `this` pointer**, **friend functions**, **friend classes**, **inline functions**, **arrays of objects**, and **passing objects to functions** by value and by reference.

---

## ✅ Questions Covered

| Q# | Topic | Description |
|---|---|---|
| Q1 | Pointer to Object & `this` Pointer | Demonstrate accessing class members using a pointer to an object and using `this` to resolve name conflicts |
| Q2 | Friend Function – Swap | Swap private data members of two different classes using a common friend function |
| Q3 | Friend Function – Add | Add data members from objects of two different classes using a friend function |
| Q4 | Friend Class | Demonstrate how a friend class can access private members of another class |
| Q5 | Array of Objects | Create an array of `Rectangle` objects and calculate area of each using a loop |
| Q6 | Inline Function | Use an `inline` function to calculate the cube of a number efficiently |
| Q7a | Pass Object by Value | Pass an object to a function by value and return a modified copy (original unchanged) |
| Q7b | Pass Object by Reference | Pass an object by reference so the original is directly modified inside the function |

---

## 🧠 Concepts Used

- **Pointer to Object** — using `->` operator to access members via pointer
- **`this` Pointer** — refers to the current object inside a member function
- **Friend Function** — a non-member function with access to private data of a class
- **Friend Class** — an entire class granted access to private members of another class
- **Array of Objects** — storing multiple objects in an array and iterating with loops
- **Inline Function** — avoids function call overhead for small, frequently used functions
- **Pass by Value** — a copy of the object is passed; original stays unchanged
- **Pass by Reference** — the original object is directly modified inside the function

---

## ▶️ How to Run

1. **Clone this repository:**
   ```bash
   git clone https://github.com/parminderrathour/OOPS-assignment-3.git
   cd OOPS-assignment-3
   ```

2. **Compile the file using g++:**
   ```bash
   g++ parminder_ass3.cpp -o output
   ```

3. **Run the output:**
   ```bash
   ./output
   ```

> 💡 Since all questions are in one file, only Q1's `main()` is active by default. To run any other question, wrap Q1 in `/* */` and remove `/* */` from the question you want to run.

---

## 📁 File Structure

```
OOPS-assignment-3/
│
├── parminder_ass3.cpp     # Main C++ file with all 7 solutions
└── README.md              # Project documentation (this file)
```

---

## 🛠️ Tools & Environment

- **Language:** C++
- **Compiler:** GCC / G++
- **IDE:** Any C++ compatible IDE (VS Code, Code::Blocks, Dev-C++)

---

<p align="center">Made with ❤️ by Parminder Rathour</p>
