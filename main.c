#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    // Variable declaration and initialization
    int num1 = 10;
    int num2 = 5;
    int result;

    // Performing the addition operation
    result = sum(num1, num2);

    // Printing the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    // Tips for beginners:
    // 1. Understand data types: Familiarize yourself with different data types in C, such as int, float, and char, and use them appropriately to store different kinds of values.
    // 2. Memory management: Be mindful of memory allocation and deallocation using functions like malloc and free to avoid memory leaks.
    // 3. Use comments effectively: Comment your code to provide explanations, especially for complex logic or non-obvious code sections.

    // Good coding practices:
    // 1. Follow a consistent coding style: Maintain a consistent coding style, such as indentation, brace placement, and naming conventions, to enhance code readability and maintainability.
    // 2. Avoid global variables: Minimize the use of global variables as they can make code harder to understand and maintain. Instead, encapsulate data within functions or structures.
    // 3. Use appropriate error handling: Check for errors and handle them gracefully using techniques like return codes, error codes, or exceptions.
    
    return 0;
}