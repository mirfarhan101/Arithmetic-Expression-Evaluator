#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function Declarations
int parseExpression(const string& expression, size_t& index); // Parse addition and subtraction
int parseTerm(const string& expression, size_t& index);       // Parse multiplication and division
int parseFactor(const string& expression, size_t& index);     // Parse numbers and parentheses

int main() {
    string expression;
    cout << "Enter an arithmetic expression: ";
    getline(cin, expression); // Read the entire expression from the user

    size_t index = 0; // Start parsing from the beginning of the expression
    int result = parseExpression(expression, index); // Parse and evaluate the expression

    cout << "Result: " << result << endl; // Display the result
    return 0;
}

// Function Definitions

/**
 * Parses and evaluates addition and subtraction operations.
 * @param expression The input expression to parse.
 * @param index The current position in the expression.
 * @return The result of the evaluated expression.
 */
int parseExpression(const string& expression, size_t& index) {
    int result = parseTerm(expression, index); // Parse the first term

    // Handle addition and subtraction
    while (index < expression.length()) {
        char op = expression[index];
        if (op == '+' || op == '-') {
            index++; // Move past the operator
            int term = parseTerm(expression, index); // Parse the next term
            if (op == '+') {
                result += term; // Perform addition
            } else {
                result -= term; // Perform subtraction
            }
        } else {
            break; // Stop if no more addition/subtraction operators
        }
    }

    return result;
}

/**
 * Parses and evaluates multiplication and division operations.
 * @param expression The input expression to parse.
 * @param index The current position in the expression.
 * @return The result of the evaluated term.
 */
int parseTerm(const string& expression, size_t& index) {
    int result = parseFactor(expression, index); // Parse the first factor

    // Handle multiplication and division
    while (index < expression.length()) {
        char op = expression[index];
        if (op == '*' || op == '/') {
            index++; // Move past the operator
            int factor = parseFactor(expression, index); // Parse the next factor
            if (op == '*') {
                result *= factor; // Perform multiplication
            } else {
                result /= factor; // Perform division
            }
        } else {
            break; // Stop if no more multiplication/division operators
        }
    }

    return result;
}

/**
 * Parses numbers and parentheses.
 * @param expression The input expression to parse.
 * @param index The current position in the expression.
 * @return The result of the evaluated factor.
 */
int parseFactor(const string& expression, size_t& index) {
    int result = 0;

    // Skip whitespace
    while (index < expression.length() && isspace(expression[index])) {
        index++;
    }

    // Handle parentheses
    if (expression[index] == '(') {
        index++; // Move past the '('
        result = parseExpression(expression, index); // Parse the expression inside the parentheses
        index++; // Move past the ')'
    } else {
        // Parse numbers
        while (index < expression.length() && isdigit(expression[index])) {
            result = result * 10 + (expression[index] - '0'); // Convert char to integer
            index++;
        }
    }

    return result;
}