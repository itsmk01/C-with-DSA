/*
In C++, a function is a self-contained block of code that performs a specific task.Functions are used to break
down a program into smaller, more manageable pieces, making code easier to understand, debug, and maintain.

Here are some key aspects of functions in C++:

1.Declaration: Functions are typically declared before they are used. The declaration includes the function's
               return type, name, and parameters (if any).
               For example:
               int add(int a, int b); // Function declaration

2.Definition: The implementation of a function is called its definition. It includes the actual code that
              performs the desired task.
              For example:
              int add(int a, int b) {
              return a + b;
              }

3.Return Type: A function may return a value of a specific type using the 'return' statement. If a function does
               not return a value, its return type is 'void'.

4.Parameters: Functions can accept parameters, which are values passed into the function when it is called.
              These parameters allow functions to operate on different data each time they are called.

5.Function Call: To execute a function, you simply use its name followed by parentheses containing any required
                 arguments.
                 For example:
                 int result = add(3, 5); // Calling the add function with arguments 3 and 5

6.Function Overloading: C++ allows defining multiple functions with the same name but different parameter lists.
                        This is called function overloading.

7.Scope: Functions can have local variables, which are only accessible within the function block. They also have
         access to global variables, depending on how they are declared.

Here's a simple example illustrating some of these concepts:
*/
#include <iostream>
using namespace std ;

// Function declaration
int add(int a, int b);

int main() {
    int result = add(3, 5); // Calling the add function with arguments 3 and 5
    cout << "Result: " << result << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
