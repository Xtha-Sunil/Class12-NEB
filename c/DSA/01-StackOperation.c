// Stack follows LIFO (Last-In-First-Out) order
// Elements that are inserted most recently will be removed first
// Stack operation is done at the end of stack called TOP positon
// Insertion of element is PUSH() and Deletion of element is POP()

#include<stdio.h>
struct stack {
    int item[20];
    int top;
};

void stack_initialize(struct stack *p){
    // Initialize the stack top to -1 for an empty stack
    p->top = -1;
}

int is_empty(struct stack *p){
    // Check if the stack is empty
    if (p->top == -1)
        return 1;
    else
        return 0;
}

int is_full(struct stack *p){
    // Check if the stack is full
    return (p->top == 19);  // Array size of item is 20
}

void push(struct stack *p, int x){
    if (is_full(p)) {
        // "Stack Overflow" term means inserting further element to full stack
        printf("Stack Overflow\n");
    } 
    else {
        // Increment stack pointer by 1 and Insert the element to the top of stack
        p->top++;
        p->item[p->top] = x;
    }
}

int pop(struct stack *p){
    if(is_empty(p)){
        // "Stack Underflow" term means removing further element from empty stack 
        return -1;
    } 
    else{
        // Pop the top element x from stack and decrement stack pointer by 1
        int x = p->item[p->top];
        p->top--;
        return x;
    }
}


int top_of_stack(struct stack *p){
    if(is_empty(p)){
        printf("Stack Underflow\n");
        return -1;
    } 
    else{
        // Determine element in top of stack if stack not empty
        return p->item[p->top];
    }
}

// Driver Code
int main(){
    struct stack s;
    stack_initialize(&s);

    // Access the top of the stack or pop from an empty stack
    printf("Stack Empty Check:\n%d\n", top_of_stack(&s));

    // Insert new elemets
    push(&s, 1); // Push 1 onto the stack
    push(&s, 2); // Push 2 onto the stack
    push(&s, 3); // Push 3 onto the stack
    push(&s, 4); // Push 4 onto the stack

    printf("\nInserted Elements:\n");
    while (!is_empty(&s)) {
        int element = pop(&s);
        printf("%d\n", element);
    }

    // Pop the entire stack
    printf("\nRemoving the entire stack\n");
    pop(&s);
    
    // Insert new elemets
    push(&s, 5); // Push 5 onto the stack
    push(&s, 9); // Push 6 onto the stack
    push(&s, 7); // Push 7 onto the stack
    push(&s, 10); // Push 7 onto the stack
    
    printf("\nInserted Elements:\n");
    while (!is_empty(&s)) {
        int element = pop(&s);
        printf("%d\n", element);
    }
}

//Output:
// Stack Underflow
// Stack Empty Check:
// -1

// Inserted Elements:
// 4
// 3
// 2
// 1

// Removing the entire stack

// Inserted Elements:
// 10
// 7
// 9
// 5