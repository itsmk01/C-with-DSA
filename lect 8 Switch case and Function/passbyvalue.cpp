/*In C++, passing by value refers to the method of passing arguments to a function where a copy 
of the argument's value is made and passed to the function. This means that any changes made to 
the parameter inside the function do not affect the original value outside the function.*/


#include <iostream>
using namespace std ;
// Function definition
void changeValue(int num) {
    num = 10; // Changes the value of the parameter 'num'
    cout << "Inside the function: " << num << endl;
}

int main() {
    int value = 5;

    cout << "Before calling the function: " << value << endl;

    // Function call
    changeValue(value);

    cout << "After calling the function: " << value << endl;

    return 0;
}
