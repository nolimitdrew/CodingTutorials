#include <iostream>

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
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;

    // Tips for beginners:
    // 1. Use meaningful variable names: Choose descriptive names that reflect the purpose of the variable to improve code readability.
    // 2. Initialize variables when declaring them: Always initialize variables when declaring them to avoid using uninitialized values, which can lead to bugs.
    // 3. Comment your code: Use comments to explain the purpose of your code and provide additional context for better understanding.

    // Good coding practices:
    // 1. Use appropriate indentation: Indent your code consistently to improve readability and maintain a clear code structure.
    // 2. Follow a consistent naming convention: Choose a naming convention for variables and functions (e.g., camelCase or snake_case) and stick to it throughout your codebase.
    // 3. Break down complex tasks into smaller functions: Divide complex tasks into smaller, reusable functions to improve code modularity, readability, and reusability.

    return 0;
}