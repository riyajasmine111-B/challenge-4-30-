# LOOPLAB – Daily Expense Analyser

**CODE2THINK | 30 Days Challenge | Challenge 04**

## &#x20;About the Project

LOOPLAB is a C programming project that analyses daily expenses by classifying them into Small, Medium, and Large categories. It calculates category-wise totals, overall expenses, and average spending while handling invalid inputs.

## Objectives

- Practise loops and conditional statements in C.
- Classify expenses based on their amounts.
- Calculate expense counts, totals, and averages.
- Handle negative inputs correctly.
- Stop accepting expenses when the user enters `0`.

## Expense Classification

| Expense Amount     | Category      |
| ------------------ | ------------- |
| Below ₹100         | Small         |
| ₹100 to below ₹500 | Medium        |
| ₹500 or more       | Large         |
| Exactly ₹0         | Stop input    |
| Negative amount    | Invalid input |

## Features

- Repeatedly accepts expense amounts using a `do-while` loop.
- Displays the category of each valid expense.
- Calculates the total number of valid expenses.
- Displays category-wise counts and totals.
- Calculates the average valid expense.
- Handles cases where no valid expenses are entered.

## Technologies Used

- **Language:** C
- **Concepts:** Loops, if-else statements, variables, arithmetic operators, and user input/output.

## How to Run

1. Download or clone this repository.
2. Open the C source file in a C compiler.
3. Compile and run the program.
4. Enter expense amounts when prompted.
5. Enter `0` to stop and display the expense summary.

## Sample Test Cases

**Test Case 1:** `80, -5, 120, 650, 0`

- Valid expenses: 3
- Total expenses: ₹850
- Average expense: ₹283.33
- Negative input `-5` is rejected.

**Test Case 2:** `0`

- Valid expenses: 0
- Total expenses: ₹0
- Average is not calculated because no valid expenses were entered.

## Repository Contents

- `looplab.c` – C source code
- `output1.png` – First test run screenshot
- `output2.png` – Second test run screenshot

## Learning Outcome

This project demonstrates the practical use of loops, conditional statements, and arithmetic operations to solve a real-world expense analysis problem using C.

---

**Challenge:** 04 – LOOPLAB
**Course:** Fundamentals of Computing and C Programming
**Program:** SRM University-AP
