# AMS 595 - Assignment 7

## Project Overview
This project implements several C++ programming tasks, covering fundamental concepts like:

- Conditional statements
- Vector printing
- Fibonacci sequence generation
- Prime checks and factorization
- Pascal's Triangle generation

The tasks were implemented based on the assignment requirements and thoroughly tested.

---

## Features
- **Conditional Statements**: Simulates a MATLAB `switch` construct in C++.
- **Custom Vector Printer**: Prints elements of a vector in a user-friendly format.
- **Fibonacci Sequence**: Generates Fibonacci numbers under 4,000,000 using a `while` loop.
- **Prime and Factorization Utilities**:
  - Check if a number is prime.
  - Find all factors of a number.
  - Perform prime factorization.
- **Pascal's Triangle**: Generates the first `n` rows of Pascal's Triangle using recursion or iteration.

---

## Prerequisites
Ensure you have the following installed:

- A C++ compiler (e.g., `g++` for Linux/Mac or MinGW for Windows)
- A terminal or IDE to compile and execute the code

---

## Installation
1. Clone this repository to your local machine:
   ```bash
   git clone <repository-url>
   ```
2. Navigate to the project directory:
   ```bash
   cd <project-directory>
   ```

---

## Usage
1. Compile the code using a C++ compiler:
   ```bash
   g++ -o project project.cpp
   ```
2. Run the executable:
   ```bash
   ./project
   ```

The program will guide you through various functionalities.

---

## Code Organization
The program consists of multiple functions addressing different tasks:

1. **Conditional Statements**: Handles user input and outputs specific responses.
2. **Vector Printer**: Prints all elements of an integer vector.
3. **Fibonacci Sequence**: Outputs Fibonacci numbers under 4,000,000.
4. **Prime Checks and Factorization**:
   - `is_prime`: Determines whether a number is prime.
   - `factorize`: Finds all factors of a number.
   - `prime_factorize`: Performs prime factorization.
5. **Pascal's Triangle**: Outputs the first `n` rows of Pascal's Triangle.

---

## Example Outputs
### Task 1: Conditional Statements
Input: `-1`  
Output: `negative one`

### Task 2: Printing a Vector
Input: `{1, 2, 3, 4}`  
Output: `1 2 3 4`

### Task 3: Fibonacci Sequence
Output: `1 2 3 5 8 13 21 34 55 ...`

### Task 4: Prime Checks and Factorization
- Prime Check: `is_prime(2) = true`
- Factorization: `Factors of 72: 1 2 3 4 6 8 9 12 18 24 36 72`
- Prime Factorization: `Prime factors of 72: 2 2 2 3 3`

### Task 5: Pascal's Triangle
Output for 5 rows:
```
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

---