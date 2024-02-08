# Function to calculate the sum of two numbers
def sum(a, b):
    return a + b

def main():
    # Variable declaration and initialization
    num1 = 0
    num2 = 0
    result = 0

    # User input
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))

    # Performing the addition operation
    result = sum(num1, num2)

    # Printing the result
    print(f"The sum of {num1} and {num2} is: {result}")

    # Tips for beginners:
    # 1. Understand Python's dynamic typing: Python is dynamically typed, so be aware of the types of variables and their potential changes throughout the code.
    # 2. Leverage built-in data structures: Python offers powerful built-in data structures like lists, dictionaries, and sets. Understand their usage and benefits to write efficient code.
    # 3. Utilize Python's standard library: Python has an extensive standard library with various modules for different purposes. Explore and utilize these modules to avoid reinventing the wheel.

    # Good coding practices:
    # 1. Follow PEP 8 guidelines: Adhere to the Python Enhancement Proposal (PEP) 8 style guide for consistent code formatting, including indentation, line lengths, and naming conventions.
    # 2. Use list comprehensions and generator expressions: Take advantage of concise and efficient constructs like list comprehensions and generator expressions to write cleaner and more efficient code.
    # 3. Handle exceptions properly: Use try-except blocks to handle exceptions and errors gracefully. Avoid using bare except statements and be specific about the exceptions you catch.

if __name__ == "__main__":
    main()