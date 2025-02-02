# Arithmetic-Expression-Evaluator

**COMPANY NAME** : CODETECH IT SOLUTIONS

**NAME** : FARHAN MIR

**INTERN ID** : CT08JFI

**DOMAIN NAME** : C++

**BATCH DURATION** : JANUARY 5th,2025 to FEBUARY 5th,2025

**MENTOR NAME** : NEELA SANTHOSH

**TASK DESCRITION** :  For this task, I was asked to create an arithmetic expression evaluator in C++ that can handle basic operations like addition, subtraction, multiplication, division, and parentheses. The goal was to design a program that can correctly evaluate a given expression following the order of operations (PEMDAS).

The tools I used for this project were all part of the **C++ Standard Library**. I relied on libraries like `iostream` for handling input and output, `string` for working with the input expression, and `cctype` to check whether certain characters are digits or whitespaces. These libraries were crucial in making the program efficient and simple.

The approach I used for solving the problem was to break down the input expression into smaller parts using recursion. First, I created a function to handle addition and subtraction, and then another for multiplication and division. These functions would call a final function responsible for handling numbers and expressions inside parentheses. This recursive design ensures that the program follows the correct order of operations.

The program works by first reading an arithmetic expression from the user. It then parses the expression, breaking it into terms and factors based on the operations. If it encounters a parentheses expression, it will recursively evaluate the inner expression first before proceeding. Once everything is parsed, the program performs the necessary operations and outputs the final result.

For this task, I didn't need any external libraries or resources beyond the C++ standard tools. However, it was really helpful to refer to some basic programming principles like recursion, handling user input, and basic string manipulation. If you're interested in improving or expanding on this program, you could look into handling floating-point numbers or more complex operations, and there are plenty of tutorials on C++ recursion that might be useful for that.

Overall, this project allowed me to work with recursion in C++ and deepen my understanding of parsing and evaluating mathematical expressions. It’s a great way to practice string manipulation, recursion, and working with core C++ functionality to solve a real-world problem.
