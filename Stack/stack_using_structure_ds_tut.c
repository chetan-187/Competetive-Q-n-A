/*
// C program for array implementation of stack using structure
// A structure to represent a stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
// Write following functions
// function to create a stack of given capacity, with no items in the stack.
struct Stack* createStack(unsigned capacity);
int isFull(struct Stack* s);
int isEmpty(struct Stack* s);
void push(struct Stack* s, int item);
int pop(struct Stack* s);    		//Function to remove top item from stack and return its value
int peek(struct Stack* s);		// Function to return the top from stack without removing it
void disp_stack(struct Stack* s); 	// Display all items in the stack from Top to Bottom
// Program to test above functions
int main()
{
    struct Stack* s1 = createStack(100);
    // demonstrate use of all above operations by calling the functions here
   // After each operation, call ‘disp_stack’  to display the s
    return 0;
}
*/
