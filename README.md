# Simple Calculator (C++)

A simple console-based calculator built in C++ that performs addition, subtraction, multiplication, and division on two numbers.

## Features

- Add, subtract, multiply, and divide two numbers
- Handles division by zero gracefully
- Menu-driven interface for selecting an operation
- Option to repeat calculations without restarting the program

## Demo
Simple Calculator
Enter the First number:
10
Enter the Second number:
5
Which operation do you want to perform?
For Addition(+)**********Press 1
For Subtraction(-)******Press 2
For Multiplication()****Press 3
For Division(/)**********Press 4
1
10 + 5 is 15
Do you want to do calculation again(yes / no)

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, MSVC, or Visual Studio)

### Build and Run

**Using g++:**
```bash
g++ calculator.cpp -o calculator
./calculator
```

**Using Visual Studio:**
1. Open the project in Visual Studio.
2. Build the solution (Ctrl+Shift+B).
3. Run (Ctrl+F5).

## How It Works

1. The user enters two numbers.
2. The user selects an operation from a menu (Addition, Subtraction, Multiplication, or Division).
3. The program calculates and displays the result.
4. If division by zero is attempted, an error message is shown instead of crashing.
5. The user is asked if they want to perform another calculation.

## Project Structure
simple-calculator-cpp/
├── calculator.cpp
└── README.md

## License

This project is open source and available under the [MIT License](LICENSE).
