// Linked list:
// A sequence of elements, where each element contains a value and a reference (or link) 
// to the next element in the sequence.

// Initial State: 
// [Head] o→ [NULL]

// Insert 10 at beginning:
// [Head] o→ [10] o→ [NULL]

// Insert 20 at the beginning: 
// [Head] o→ [20] o→ [10] o→ [NULL]

// Insert 30 at the beginning: 
// [Head] o→ [30] o→ [20] o→ [10] o→ [NULL]

// Deleting the first node: 
// [Head] o→ [20] o→ [10] o→ [NULL]


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Traversing the linked list using a pointer
void traverse(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insert a node at the beginning of the linked list
struct node *insertAtBeg(struct node *head, int data) {
    // Allocate memory for a new node
    // Creating a pointer 'ptr' of type 'struct node *' to store the address of the new node
    // 'malloc' allocates memory for a 'struct node' and casts it to the appropriate type
    // 'sizeof(struct node)' expression ensures enough memory is allocated for the node
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// Insert a node at the end of the linked list
struct node *insertAtEnd(struct node *head, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL) {
        return ptr;     // If the list is empty, the new node becomes the head
    }
    struct node *p = head;
    while (p->next != NULL)
        p = p->next;
    p->next = ptr;      // Append the new node to the end
    return head;
}

// Insert a node after a given node
struct node *insertAfterNode(struct node *head, struct node *prenode, int data) {
    if (prenode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return head;
    }
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prenode->next;
    prenode->next = ptr;
    return head;
}

// Delete the first node in the linked list
struct node *deleteAtFirst(struct node *head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete from an empty list.\n");
        return head;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);      // Free the memory of the deleted node
    return head;
}

// Delete the last node in the linked list
struct node *deleteAtLast(struct node *head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete from an empty list.\n");
        return head;
    }
    struct node *p = head;
    struct node *q = head->next;
    if (q == NULL) {
        // Only one element in the list is present
        free(p);
        return NULL; // List becomes empty
    }
    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }
    p->next = NULL; // Remove the reference to the last node
    free(q);        // Free the memory of the deleted node
    return head;
}

int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // 'head' contains data: 7 and points to the next node 'second'.
    head->data = 7;
    head->next = second;

    // 'second' contains data: 18 and points to the next node 'third'.
    second->data = 18;
    second->next = third;

    // 'third' contains data: 44 and points to the next node 'fourth'.
    third->data = 44;
    third->next = fourth;

    // 'fourth' contains data: NULL, indicating the end of the list.
    fourth->next = NULL;

    printf("\nList before Insertion and Deletion\n");
    traverse(head);

    head = insertAtBeg(head, 13);
    head = insertAtEnd(head, 65);
    head = insertAfterNode(head, second, 74);

    printf("\nList after Insertion\n");
    traverse(head);

    head = deleteAtFirst(head);
    head = deleteAtLast(head);

    printf("\nList after Deletion\n");
    traverse(head);

    return 0;
}

// Note:
// End Null element may have unexpected range of values due to issues with different compilers
// so instead of '0'{NULL} some random values like '12714176','8454336' may appear

// Output:

// List before Insertion and Deletion
// Element: 7
// Element: 18
// Element: 44
// Element: 0
//  
// List after Insertion
// Element: 13
// Element: 7
// Element: 18
// Element: 74
// Element: 44
// Element: 0
// Element: 65
//
// List after Deletion
// Element: 7
// Element: 18
// Element: 74
// Element: 44
// Element: 0

// ----------Output Visualization:----------

// Linked List Structure:
// [7] o→ [18] o→ [44] o→ [NULL]

// After Insertion:
// [13] o→ [7] o→ [18] o→ [74] o→ [44] o→ [NULL] o→ [65]

// After Deletion:
// [7] o→ [18] o→ [74] o→ [44] o→ [NULL]