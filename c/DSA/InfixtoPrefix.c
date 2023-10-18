#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define max 100

struct stack {
    char item[max];
    int top;       // Index of the top item
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
    if (is_empty(p))
        return -1;
    else {
        x = p->item[p->top];
        p->top--;
        return x;
    }
}

char top_of_stack(struct stack *p) {
    char x;
    if (is_empty(p))
        return -1;
    else {
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

void reverse(char str[]) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Main function for infix to Prefix conversion
int main() {
    struct stack s;
    char infix[max], prefix[max];
    int i, j = 0;
    stack_initialize(&s);
    printf("Enter the infix expression:\n");
    gets(infix);

    reverse(infix);
    char temp;
    for (i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    for (i = 0; infix[i] != '\0'; i++) {
        if (isalpha(infix[i])) {
            prefix[j] = infix[i];
            j++;
        } 
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '/' || infix[i] == '*' || infix[i] == '^' || infix[i] == '$') {
            if (infix[i] == '^')
                temp = '$';
            else if (infix[i] == '$')
                temp = '^';
            else
                temp = infix[i];

            if (is_empty(&s) || temp == '(')
                push(&s, temp);
            else if (priority(temp) > priority(top_of_stack(&s)) || top_of_stack(&s) == '(')
                push(&s, temp);
            else if (priority(temp) <= priority(top_of_stack(&s))) {
                while (priority(temp) < priority(top_of_stack(&s))) {
                    prefix[j] = pop(&s);
                    j++;
                }
                push(&s, temp);
            }
        } 
        else if (infix[i] == '(')
            push(&s, infix[i]);
        else if (infix[i] == ')') {
            while (top_of_stack(&s) != '(') {
                prefix[j] = pop(&s);
                j++;
            }
            pop(&s);
        }
    }

    while (!is_empty(&s)) {
        prefix[j] = pop(&s);
        j++;
    }

    // Null-terminate the prefix expression
    prefix[j] = '\0';
    
    reverse(prefix);
    printf("Prefix Expression:\n%s\n", prefix);
    return 0;
}

// Output:
// Enter the infix expression:
// A + B * C
// Prefix Expression:
// +A*BC

// Enter the infix expression:
// (A + B) * (C + D)
// Prefix Expression:
// *+AB+CD
