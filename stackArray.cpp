#include "stackArraybased.h"
#include <iostream>
using namespace std;

// constructor: creates a stack of size `n`
stack::stack(int n) {
    maxsize = n;                  // set the maximum size of the stack
    stackArray = new int[maxsize]; // create a dynamic array
    top = -1;                     // initialize the top to -1 (indicating an empty stack)
    count = 0;                    // initialize the count to 0
}

// copy constructor: creates a copy of an existing stack
stack::stack(const stack &original) {
    maxsize = original.maxsize; // copy the maximum size
    top = original.top;         // copy the top index
    count = original.count;     // copy the count
    stackArray = new int[maxsize]; // create a new dynamic array
    for (int i = 0; i <= top; i++) {
        stackArray[i] = original.stackArray[i]; // copy elements up to the current top
    }
}

// checks if the stack is empty
bool stack::stackIsEmpty() {
    return (top == -1); // true if top is -1, false otherwise
}

// checks if the stack is full
bool stack::stackIsFull() {
    return (top >= maxsize - 1); // true if top index has reached the maximum size
}

// returns the current size of the stack
int stack::stackSize() {
    return count; // return the number of elements in the stack
}

// adds a new element to the top of the stack
void stack::push(int x) {
    if (!stackIsFull()) { // check if there's space in the stack
        stackArray[++top] = x; // increment top and assign the new value
        count++;               // increment the count of elements
    } else {
        cout << "The stack is full. Cannot add more elements.\n"; // error message
    }
}

// removes the top element from the stack and returns it by reference
void stack::pop(int &x) {
    if (!stackIsEmpty()) { // check if the stack has elements
        x = stackArray[top--]; // assign the top element to x and decrement top
        count--;               // decrement the count
    } else {
        cout << "The stack is empty. Cannot remove elements.\n"; // error message
    }
}

// retrieves the top element without removing it
void stack::stackTop(int &x) {
    if (!stackIsEmpty()) { // check if the stack has elements
        x = stackArray[top]; // assign the top element to x
    } else {
        cout << "The stack is empty. No top element to display.\n"; // error message
    }
}

// destructor: releases the allocated memory for the stack
stack::~stack() {
    delete[] stackArray; // delete the dynamic array
}

