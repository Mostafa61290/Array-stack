// header file
// contains the definition of data members and function prototypes
class stack {
    // we will make the stack using array-based technique by creating a dynamic array
    // data members
private:
    int *stackArray;  // pointer used to declare the stack (note: S capital for pointer)
    int top;          // to store the last element in the stack
    int maxsize;      // to store the size of the stack (since it's array-based, we pass the size)
    int count;        // used to count items in the array
public:
    // function prototypes
    stack(int n = 128);             // constructor (default size = 128 if not provided)
    stack(const stack &original);   // copy constructor
    void push(int x);               // push a new element onto the stack
    void pop(int &x);               // pop by reference (returns the element at top and deletes it)
    void stackTop(int &x);          // get the top element without deleting it
    bool stackIsFull();             // check if the stack is full
    bool stackIsEmpty();            // check if the stack is empty
    int stackSize();                // return the count of items in the stack
    ~stack();                       // destructor
};

