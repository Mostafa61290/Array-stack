// application file 
#include "stackArraybased.h"
#include <iostream>
using namespace std;

int main() {
    stack s1(10);        // static object from stack (size = 10)
    stack *s = new stack(5); // dynamic stack (size = 5)
    int top;             // variable to store the top element

    // Testing stack operations
    s1.push(1);
    s1.push(5);
    s1.push(3);

    // Displaying the top element
    s1.stackTop(top);
    cout << "The top element is: " << top << endl;

    // Removing the top element
    s1.pop(top);
    cout << "Removed element: " << top << endl;

    // Displaying the current size of the stack
    cout << "Current stack size: " << s1.stackSize() << endl;

    // Cleanup dynamic stack
    delete s; // free memory for the dynamic stack

    return 0;
}

