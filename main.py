# Function to calculate the sum of two numbers
def sum(a, b):
    return a + b

def main():
    # Variable declaration and initialization
    num1 = 10
    num2 = 5
    result = 0

    # Performing the addition operation
    result = sum(num1, num2)

    # Printing the result
    print(f"The sum of {num1} and {num2} is: {result}")

    # Tips for beginners:
    # 1. Use meaningful variable names to improve code readability.
    # 2. Initialize variables when declaring them to avoid using uninitialized values.
    # 3. Comment your code to explain its purpose and make it easier to understand.

    # Good coding practices:
    # 1. Use consistent indentation for better code organization.
    # 2. Follow a consistent naming convention (e.g., camelCase or snake_case) for variables and functions.
    # 3. Break down complex tasks into smaller functions to improve code modularity and reusability.

if __name__ == "__main__":
    main()