// Static List (Array) Implementation

#include <stdio.h>

#define max 50

struct list {
    int info, next;
};

struct list node[max];
int head = -1, avail = 0, length = 0;

// Declaration of the freeNode function 
// {so it would remove the warning when the freeNode function is not declared before it is used during runtime }
void freeNode(int p); 

void int_list() {
    for (int i = 0; i < max - 1; i++)
        node[i].next = i + 1;
    node[max - 1].next = -1;
}

int get_node() {
    int p;
    if (avail == -1) {
        // Print overflow if there are no available nodes
        printf("Overflow\n"); 
        return -1;
    }
    p = avail;                // Get a node from the available list
    avail = node[avail].next; // Update the available list
    return p;
}

void insertAfter(int p, int x) {
    if (length >= max) {
        // Print overflow if the list is full
        printf("Overflow\n"); 
        return;
    }
    // Get a new node
    int q = get_node(); 
    node[q].info = x;   // Set the value of the new node
    length++;

    if (p == -1) {
        // Insert at the beginning of the list
        node[q].next = head;
        head = q;                        // Update the head to point to the new node
        printf("\n%d is inserted\n", x);
        return;
    }

    int i = head;
    while (i != -1) {
        if (node[i].info == p) {
            // Insert after the node with value 'p'
            node[q].next = node[i].next;
            node[i].next = q;
            printf("\n%d is inserted\n", x);
            return;
        }
        i = node[i].next;
    }

    printf("Position not found for insertion\n"); 
    // Free the unused node
    freeNode(q); 
}

void freeNode(int p) {
    // Free a node by adding it to the available list
    node[p].next = avail; 
    avail = p;
}

int deleteAfter(int p) {
    if (length == 0) {
        // Print deletion if the list is empty
        printf("\nDeletion\n"); 
        return -1;
    }

    if (p == -1) {
        int q = head;
        int info = node[q].info;
        head = node[q].next;    // Delete the first node
        freeNode(q);            // Free the deleted node
        length--;
        return info;
    }

    int i = head;
    while (i != -1) {
        if (node[i].info == p) {
            int q = node[i].next;
            int info = node[q].info;
            node[i].next = node[q].next;
            freeNode(q);        // Free the deleted node
            length--;
            return info;
        }
        i = node[i].next;
    }

    printf("Position not found for deletion\n");
    return -1;
}

int main() {
    int a, y;
    int_list();
    a = get_node();

    // Insertion of array elements
    insertAfter(-1, 5);
    insertAfter(5, 7);
    insertAfter(7, 8);
    insertAfter(8, 12);
    insertAfter(12, 21);
    insertAfter(21, 3);

    // Print all elements in the list
    printf("\nAll elements in the list: ");
    int i = head;
    while (i != -1) {
        printf("%d ", node[i].info);
        i = node[i].next;
    }
    printf("\n");

    // Deletion of array element after certain element
    y = deleteAfter(7);
    if (y != -1)
        printf("\nDeleted element: %d\n", y);

    // Print the remaining elements in the list
    printf("Remaining elements in the list: ");
    i = head;
    while (i != -1) {
        printf("%d ", node[i].info);
        i = node[i].next;
    }

    return 0;
}

// Output:
// 5 is inserted

// 7 is inserted

// 8 is inserted

// 12 is inserted

// 21 is inserted

// 3 is inserted

// All elements in the list: 5 7 8 12 21 3

// Deleted element: 8
// Remaining elements in the list: 5 7 12 21 3