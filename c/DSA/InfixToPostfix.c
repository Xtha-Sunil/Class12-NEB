#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max 100

struct stack {
    char item[max];
    int top;    // Index of the top item
};

void stack_initialize(struct stack *p) {
    // Set the top index to -1 to indicate an empty stack
    p->top = -1;
}

int is_empty(struct stack *p) {
    return p->top == -1;
}

int is_full(struct stack *p) {
    // Stack is full if the top index is at the maximum
    return p->top == max - 1;
}

void push(struct stack *p, char x) {
    if (is_full(p))
        printf("Stack Overflow\n");
    else {
        p->top++;
        p->item[p->top] = x;
    }
}

char pop(struct stack *p) {
    char x;
    if (is_empty(p)) {
        // printf("Stack Underflow\n");
        // Return -1 to indicate an empty stack
        return -1;
    } else {
        x = p->item[p->top];
        p->top--;
        return x;
    }
}

char top_of_stack(struct stack *p) {
    char x;
    if (is_empty(p)) {
        // printf("Stack Underflow\n");
        return -1;
    } else {
        // Get the top item
        x = p->item[p->top];
        return x;
    }
}

// Function to determine the priority of an operator
int priority(char ch) {
    if (ch == '^' || ch == '$')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

// Main function for infix to postfix conversion
int main() {
    struct stack s;
    char infix[max], postfix[max];
    int i, j = 0;
    stack_initialize(&s);
    printf("Enter the infix expression:\n");
    // Get the infix expression from the user
    gets(infix);
    
    for (i = 0; infix[i] != '\0'; i++) {
        if (isalpha(infix[i])) {
            // If operand(alphabets), add it to the postfix expression
            postfix[j] = infix[i];
            j++;
        }

        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '/' || infix[i] == '*' || infix[i] == '^' || infix[i] == '$') {
            if (top_of_stack(&s) == '(' || is_empty(&s))
                // If operator(+,-,*,/,^,$) and stack is empty, push it
                push(&s, infix[i]);

            else if (priority(infix[i]) > priority(top_of_stack(&s)))
                // If higher priority, push it
                push(&s, infix[i]);

            else if (priority(infix[i]) <= priority(top_of_stack(&s))) {
                while (priority(infix[i]) <= priority(top_of_stack(&s)) && !is_empty(&s)) {
                    // Pop operators(+,-,*,/,^,$) with higher or equal priority
                    postfix[j] = pop(&s);
                    j++;
                }
                // Push the current operator
                push(&s, infix[i]);
            }
        }

        else if (infix[i] == '(')
            // Push an opening parenthesis
            push(&s, '(');
        
        else if (infix[i] == ')') {
            while (top_of_stack(&s) != '(') {
                // Pop operators until matching '(' is found
                postfix[j] = pop(&s);
                j++;
            }
            // Pop the '('
            pop(&s);
        }
    }
    
    while (!is_empty(&s)) {
        // Pop any remaining operators
        postfix[j] = pop(&s);
        j++;
    }

    // Null-terminate the postfix expression
    postfix[j] = '\0';

    printf("Postfix Expression:\n%s\n", postfix);
    return 0;
}

// Output:
// Enter the infix expression:
// A+B*C-(D/E+F)*G
// Postfix Expression:
// ABC*+DE/F+G*-

// Enter the infix expression:
// A*(B+C)-D/ E
// Postfix Expression:
// ABC+*DE/-
